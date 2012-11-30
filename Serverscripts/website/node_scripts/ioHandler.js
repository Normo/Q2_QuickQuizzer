//TODO: in config auslagern
var answerDelay = 5000;
var playableCount = 4;
var timePerQ = 30;
var rounds = 9; 

var game = require("./qsquare");
var dataBase = require("./DataBaseHandler");

var answered;
var timerId;
var curRound;

function handleEvents(io) {

	io.sockets.on('connection', function (clientSocket) {
		
		//Nachricht das die Verbindung hergestellt wurde
		clientSocket.emit('connected');
	  
		/*
		  Beispiel zum Werte abspeichern und global verfügbar machen
		  // Promote this socket as master
		  clientSocket.on("I'm the master", function() {

			// Save the socket id to Redis so that all processes can access it.
			client.set("mastersocket", clientSocket.id, function(err) {
			  if (err) throw err;
			  console.log("Master socket is now" + clientSocket.id);
			});
		  });
		*/
		
		//Benutzer beim Disconnect entfernen
		clientSocket.on('disconnect', function () {
			userList = game.removeUser(clientSocket.username);
			//Broadcast der Nutzerliste
			io.sockets.emit('updateUsers', userList);
		});
		
		//Neuer Benutzer
		clientSocket.on('newUser', function(username) {
			userList = game.addUser(username);
			if (userList != false) {
				//Nutzernamen in der Client-Session speichern
				clientSocket.username = username;
				//Broadcast der Nutzerliste
				io.sockets.emit('updateUsers', userList);
				if (userList.length == playableCount){
					curRound = Number(0);
					getRandomQuestion();
				}
			} else {
				//Benutzer konnte nicht hinzugefügt werden -> Voll.
				clientSocket.emit('userFull');
			}	
		});
		
		//Benutzer antwortet
		clientSocket.on('user_answered', function(index){
			console.log(clientSocket.username + " antwortet ...");
			console.log("Es wurde schon geantwortet?: " + answered);
			if (answered == false){
				if (game.checkAnswer(clientSocket.username, index)) {
					clearInterval(timerId);
					console.log("... richtig.");
					io.sockets.emit('answerCorrect', index);
					answered = true;
					
					if (curRound == rounds) {
						finish();
					} else {
						dataBase.getRandomCategorys( function(rows){
							io.sockets.emit('incomingCategorys', {cat1_Text: String(rows[0].Category_Text),
																  cat1_Id: String(rows[0].Category_UUID),
																  cat2_Text: String(rows[1].Category_Text),
																  cat2_Id: String(rows[1].Category_UUID),
																  cat3_Text: String(rows[2].Category_Text),
																  cat3_Id: String(rows[2].Category_UUID)},
																  game.getPlayerId(clientSocket.username),
																  clientSocket.username);
						});
					}	
				} else {
					console.log("... falsch.");
					io.sockets.emit('answerWrong', index);
					answered = false;
				}
				io.sockets.emit('updateUsers', game.userList);
			}
		});
		
		//Benutzer wählt Kategorie
		clientSocket.on('user_choosed_cat', function(id){
			getRandomQuestion(id)
		});
		
		//Zufällige Frage ermitteln
		function getRandomQuestion(catId){
			answered = false;
			curRound = curRound + 1;
			clearInterval(timerId);
			dataBase.getRandomQuestion(catId, function(rows){
				io.sockets.emit('incomingQuestion', {text: rows[0].Question_Text,
													 cat: String(rows[0].Category_Text),
													 points: rows[0].Difficulty_Points,
													 round: curRound
													});			
				game.currentCorrectAnswer = rows[0].Question_Correct_Answer_Index;
				setTimeout(function(rows){
					io.sockets.emit('incomingAnswer', {answer1: rows[0].Question_Answer1,
													   answer2: rows[0].Question_Answer2,
													   answer3: rows[0].Question_Answer3,
													   answer4: rows[0].Question_Answer4
													  });								   
					var i = 1;
					timerId = setInterval(function(time){
						io.sockets.emit('time', time - i);
						if ( time - i <= 0){
							clearInterval(timerId);
							io.sockets.emit('timeout');
							if (curRound == rounds)
								finish();
							else
								getRandomQuestion(catId);
						}
						i++;
					}, 1000, Number(timePerQ));								  
				}, answerDelay, rows);
			});
		};
		
		function finish () {
			io.sockets.emit('finish');
			dataBase.updateHighScore(game.userList);	//Dauert vermutlich zu lange und Score wird dadurch nich korrekt angezeigt
			dataBase.getHighScore(function (highscore){
				console.log(highscore[0].Account_Name + " " + highscore[0].Highscore_Score);
				io.sockets.emit('highscore', {name1: highscore[0].Account_Name,
											  score1: highscore[0].Highscore_Score,	
											  name2: highscore[1].Account_Name,
											  score2: highscore[1].Highscore_Score,
											  name3: highscore[2].Account_Name,
											  score3: highscore[2].Highscore_Score,
											  name4: highscore[3].Account_Name,
											  score4: highscore[3].Highscore_Score,
											  name5: highscore[4].Account_Name,
											  score5: highscore[4].Highscore_Score,
											  name6: highscore[5].Account_Name,
											  score6: highscore[5].Highscore_Score,
											  name7: highscore[6].Account_Name,
											  score7: highscore[6].Highscore_Score,
											  name8: highscore[7].Account_Name,
											  score8: highscore[7].Highscore_Score,
											  name9: highscore[8].Account_Name,
											  score9: highscore[8].Highscore_Score,
											  name10: highscore[9].Account_Name,
											  score10: highscore[9].Highscore_Score,
											 });
			});
		};
	});
}

exports.handleEvents = handleEvents;
