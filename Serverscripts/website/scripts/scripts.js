var socket = io.connect('http://178.25.75.91');
			
			//Verbindung wurde aufgebaut
			socket.on('connected', function (data) {
				overlay(['anmeldung'], true); //Anmeldedialog anzeigen
				overlay(['category' , 'highscore', 'player1_nailed', 'player2_nailed', 'player3_nailed', 'player4_nailed'], false);
				overlay(['answer1' , 'answer2' , 'answer3' , 'answer4'], false);
				socket.emit('my other event', { my: 'data' });
			});
			
			//Blendet das Overlay ein/aus
			function overlay(elements, visible) {
				for (var i = 0; i < elements.length; i++){
					el = document.getElementById(elements[i]);
					el.style.visibility = (visible == true) ? "visible" : "hidden";
				}	
			}
			
			socket.on('incomingQuestion', function(question){
				ResetLayout();
				document.getElementById("question").innerHTML = "<p>" + question.text + "</p>";
				document.getElementById("category_text").innerHTML = "<p>" + question.cat + "</p>";
				document.getElementById("points").innerHTML = "<p>" + question.points + "</p>";
				document.getElementById("question_number").innerHTML = "<p>" + question.round + "</p>";
			});
			
			socket.on('incomingAnswer', function(answers){
				overlay(['answer1' , 'answer2' , 'answer3' , 'answer4'], true);
				document.getElementById("answer1_text").innerHTML = answers.answer1;
				document.getElementById("answer2_text").innerHTML = answers.answer2;
				document.getElementById("answer3_text").innerHTML = answers.answer3;
				document.getElementById("answer4_text").innerHTML = answers.answer4;
			}); 
			
			socket.on('incomingCategorys', function(cats, playerId, playerName){
				overlay(["category_player" + (playerId+1)],true);
				document.getElementById("category_player" + (playerId+1) + "_name").innerHTML = "<p>" + playerName + "</p>";
				document.getElementById("category_head").value = playerName;
				
				document.getElementById("category1_name").innerHTML = "<p>" + cats.cat1_Text + "</p>";
				document.getElementById("category1_name").value = cats.cat1_Id;
				document.getElementById("category2_name").innerHTML = "<p>" + cats.cat2_Text + "</p>";
				document.getElementById("category2_name").value = cats.cat2_Id;
				document.getElementById("category3_name").innerHTML = "<p>" + cats.cat3_Text + "</p>";
				document.getElementById("category3_name").value = cats.cat3_Id;
				
				overlay(["category"],true);
			});		

			socket.on('time', function (time){
				if (time < 10)
					time = "0"+time;
				document.getElementById("time").innerHTML = "<p>" + time + "</p>";
			});	
			
			socket.on('timeout', function (){
				MessageToast("Die Zeit ist um!","Neue Frage, selbe Kategorie!");
			});	
			
			socket.on('finish', function (){
				MessageToast("Ende","Dir wars nu schon =(");
			});	
			
			socket.on('highscore', function (highscore){
				document.getElementById("highscore1_name").innerHTML = "<p>" + highscore.name1 + "</p>";
				document.getElementById("highscore1_points").innerHTML = "<p>" + highscore.score1 + "</p>";
				document.getElementById("highscore2_name").innerHTML = "<p>" + highscore.name2 + "</p>";
				document.getElementById("highscore2_points").innerHTML = "<p>" + highscore.score2 + "</p>";
				document.getElementById("highscore3_name").innerHTML = "<p>" + highscore.name3 + "</p>";
				document.getElementById("highscore3_points").innerHTML = "<p>" + highscore.score3 + "</p>";
				document.getElementById("highscore4_name").innerHTML = "<p>" + highscore.name4 + "</p>";
				document.getElementById("highscore4_points").innerHTML = "<p>" + highscore.score4 + "</p>";
				document.getElementById("highscore5_name").innerHTML = "<p>" + highscore.name5 + "</p>";
				document.getElementById("highscore5_points").innerHTML = "<p>" + highscore.score5 + "</p>";
				document.getElementById("highscore6_name").innerHTML = "<p>" + highscore.name6 + "</p>";
				document.getElementById("highscore6_points").innerHTML = "<p>" + highscore.score6 + "</p>";
				document.getElementById("highscore7_name").innerHTML = "<p>" + highscore.name7 + "</p>";
				document.getElementById("highscore7_points").innerHTML = "<p>" + highscore.score7 + "</p>";
				document.getElementById("highscore8_name").innerHTML = "<p>" + highscore.name8 + "</p>";
				document.getElementById("highscore8_points").innerHTML = "<p>" + highscore.score8 + "</p>";
				document.getElementById("highscore9_name").innerHTML = "<p>" + highscore.name9 + "</p>";
				document.getElementById("highscore9_points").innerHTML = "<p>" + highscore.score9 + "</p>";
				document.getElementById("highscore10_name").innerHTML = "<p>" + highscore.name10 + "</p>";
				document.getElementById("highscore10_points").innerHTML = "<p>" + highscore.score10 + "</p>";
				overlay(['highscore'], true);
			});
					
			socket.on('answerCorrect', function(index){
				document.getElementById("answer" + index).style.backgroundColor = "rgba(152,251,152,0.8)";
				MessageToast("Richtig!",socket.username + " hat richtig geantwortet und sahnt die Punkte ab!");
			});
			socket.on('answerWrong', function(index){
				document.getElementById("answer" + index).style.visibility = "hidden";
				MessageToast("Falsch!","Weiter raten!");
			});
			
			//Benutzer erfolgreich hinzugefügt -> Liste aktuallisieren	
			socket.on('updateUsers', function (userList) {
				for (var i = 0; i < 4; i++) {
					if (i < userList.length) {
						document.getElementById("player" + [i+1] + "_name").innerHTML = "<p>" + userList[i].name + "</p>";
						document.getElementById("player" + [i+1] + "_points").innerHTML = "<p>" + userList[i].points + "</p>";
					} else {
						document.getElementById("player" + [i+1] + "_name").innerHTML = "<p> Player" + i + "</p>";
						document.getElementById("player" + [i+1] + "_points").innerHTML = "<p>" + 0 + "</p>";
					}
				} 	
			});
			
			//Benutzerliste voll
			socket.on('userFull', function() {
				alert("Is voll alta! kannst nich spieln!")
			});
			
			function answer(index) {
				socket.emit('user_answered', index);
				//MessageToast("bla","blubb");
			}
			
			function nailClick(index) {
				
			}
			
			function chooseCat(index) {
				if (document.getElementById("category_head").value == socket.username){
					socket.emit('user_choosed_cat', document.getElementById("category" + index + "_name").value);
				} else {
					MessageToast("Du bist nicht dran!","Mensch, mensch, mensch ... keine Gedult");
				}
			}
			
			//Registriert einen Benutzer am Server
			function addUser () {
				var username = document.getElementById("txtPlayerName").value;
				socket.username = username;
				socket.emit('newUser', username );
				socket.on('userAlreadyExists', function(){
					document.getElementById("txtPlayerName").focus();
				});
				overlay(['anmeldung'],false); //Anmeldedialog wieder ausblenden
			} 
			
			function MessageToast(title, message){
				document.getElementById("message_title").innerHTML = title;
				document.getElementById("message_text").innerHTML = message;
				document.getElementById("message").style.visibility = "visible";
				window.setTimeout("document.getElementById('message').style.visibility = 'hidden'", 1000);
			}
			
			function ResetLayout(){
				overlay(['category'],false);
				overlay(['highscore'],false);
				overlay(['answer1', 'answer2', 'answer3', 'answer4'],false);
				for (var i = 0; i < 4; i++){
					document.getElementById("answer" + (i+1)).style.backgroundColor = "";
					overlay(["category_player" + (i+1)],false);
				}	
				document.getElementById("time").innerHTML = "<p>30</p>";
			}