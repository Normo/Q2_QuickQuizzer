//ToDO: in Config-Datei auslagern
var hostName = 'localhost';
//var hostName = '178.25.232.17';
var userName = 'root';
var password = 'login';
var dataBaseName = 'test';

function getRandomQuestion(catId, callback) {
	var test;
	var mysql = require('db-mysql');
	new mysql.Database({
		hostname: hostName,
		user: userName,
		password: password,
		database: dataBaseName
	}).connect(function(error) {
		if (error) {
			//return console.log('DB: CONNECTION error: ' + error);
			console.log('DB: CONNECTION error: ' + error);
		}
		
		
		if (catId == undefined)
			catId = "";
		else
			catId = "WHERE Question_Category_UUID = '" + catId + "'";
			
		sqlCmd = 	"SELECT Q.Question_Text, Q.Question_Answer1, Q.Question_Answer2, Q.Question_Answer3, \
							Q.Question_Answer4, Q.Question_Correct_Answer_Index, \
							D.Difficulty_Points, C.Category_Text \
					 FROM ( \
						SELECT * FROM dt_Question " + catId + "\
						ORDER BY RAND() \
						LIMIT 1 \
					 ) as Q \
					 JOIN dt_Difficulty AS D ON D.Difficulty_UUID = Q.Question_Difficulty_UUID \
					 JOIN dt_Category AS C ON C.Category_UUID = Q.Question_Category_UUID";
		
		console.log(sqlCmd);
		
		this.query(sqlCmd).
			execute(function(error, rows, cols) {
					if (error) {
							console.log('ERROR: ' + error);
							return;
					}
					if (rows.length > 0){
						callback(rows);
					}
		});
	});
}

function getRandomCategorys(callback) {
	var test;
	var mysql = require('db-mysql');
	new mysql.Database({
		hostname: hostName,
		user: userName,
		password: password,
		database: dataBaseName
	}).connect(function(error) {
		if (error) {
			console.log('DB: CONNECTION error: ' + error);
		}
		
		sqlCmd = "SELECT * FROM dt_Category ORDER BY Rand() LIMIT 3";
		
		console.log(sqlCmd);
		
		this.query(sqlCmd).
			execute(function(error, rows, cols) {
					if (error) {
							console.log('ERROR: ' + error);
							return;
					}
					if (rows.length > 0){
						callback(rows);
					}
		});
	});
}

function getHighScore(callback) {
	var test;
	var mysql = require('db-mysql');
	new mysql.Database({
		hostname: hostName,
		user: userName,
		password: password,
		database: dataBaseName
	}).connect(function(error) {
		if (error) {
			console.log('DB: CONNECTION error: ' + error);
		}
		
		sqlCmd = "SELECT H.*, A.Account_Name FROM dt_Highscore AS H \
					JOIN dt_Account AS A ON A.Account_UUID = H.Highscore_Account_Name_UUID \
					ORDER BY H.Highscore_Score DESC \
					LIMIT 10";
		
		console.log(sqlCmd);
		
		this.query(sqlCmd).
			execute(function(error, rows, cols) {
					if (error) {
							console.log('ERROR: ' + error);
							return;
					}
					if (rows.length > 0){
						callback(rows);
					}
		});
	});
}

function updateHighScore(scores) {
	var mysql = require('db-mysql');
	new mysql.Database({
		hostname: hostName,
		user: userName,
		password: password,
		database: dataBaseName
	}).connect(function(error) {
		if (error) {
			console.log('DB: CONNECTION error: ' + error);
		}
		
		//Accounts anlegen
		for (var i = 0; i < scores.length; i++) {
			scores[i].id = GUID();
			this.query().
			insert('dt_Account', 
				['Account_UUID', 'Account_Name', 'Account_Password'], 
				[scores[i].id, scores[i].name, 'password']
			).
			execute(function(error, result) {
					if (error) {
							console.log('ERROR: ' + error);
							return;
					}
					console.log('GENERATED id: ' + result.id);
			});
		}
		
		//Highscore bearbeiten
		for (var i = 0; i < scores.length; i++) {
			this.query().
			insert('dt_Highscore', 
				['Highscore_UUID', 'Highscore_Account_Name_UUID', 'Highscore_Score'], 
				[GUID(), scores[i].id, scores[i].points]
			).
			execute(function(error, result) {
					if (error) {
							console.log('ERROR: ' + error);
							return;
					}
					console.log('GENERATED id: ' + result.id);
			});
		}
	});
}

//Erzeugt eine GUID
function GUID ()
{
    var S4 = function ()
    {
        return Math.floor(
                Math.random() * 0x10000 /* 65536 */
            ).toString(16);
    };

    return (
            S4() + S4() + "-" +
            S4() + "-" +
            S4() + "-" +
            S4() + "-" +
            S4() + S4() + S4()
        );
}

exports.getRandomQuestion = getRandomQuestion;	
exports.getRandomCategorys = getRandomCategorys;
exports.getHighScore = getHighScore;
exports.updateHighScore = updateHighScore;