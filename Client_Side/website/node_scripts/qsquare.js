var userList = new Array(0);
var currentCorrectAnswer;

//Benutzer zur Liste hinzufügen
function addUser (username) {
	function userAlreadyExists(){
		for (var i = 0; i < userList.length; i++){
			if (userList[i].name == username) return true;
		}
	}
	//Wenn noch Platz in der Liste ist
	if (!userAlreadyExists) {
	} else if (userList.length < 4) {
		var userId = userList.length;
		var user = {name: username, id: userId, points: 0}
		console.log("Try to add user: " + username + " with id: " + userId);
		userList.push(user);
		console.log("User " + userList[userId].name + ":" + userId + " added");
		return userList;
	} else {
		console.log("Can't add User: Full");
		return false;
	}	
}

function removeUser (username) {
	var found = false;
	console.log("Try to remove user: " + username);
	for (var i = 0; i < userList.length - 1; i++) {
		if ((userList[i].name == username) || (found)) {
			userList[i] = userList[i+1];
			found = true;
		}
	}
	if (userList.length > 0) {
		userList.pop();
		console.log("User " + username + " removed");
	} else {
		console.log("Can't remove user. Userlist is already empty.");
	}	
	return userList;
}

function checkAnswer (username, index) {
	if (index == this.currentCorrectAnswer){
		for (var i = 0; i < userList.length; i++) {
			if ((userList[i].name == username)) {
				userList[i].points = Number(userList[i].points) + 1000;
			}	
			console.log("Name: " + userList[i].name + " Points: " + userList[i].points);
		}
	return true;
	} else {
		for (var i = 0; i < userList.length; i++) {
			if ((userList[i].name == username)) {
				userList[i].points = Number(userList[i].points) - 1000;
			}
			console.log("Name: " + userList[i].name + " Points: " + userList[i].points);
		}
	return false;
	}	
}

function getPlayerId(username){
	for (var i = 0; i < userList.length; i++) {
		if ((userList[i].name == username)) {
			return userList[i].id;
		}
	}
}

exports.addUser = addUser;
exports.removeUser = removeUser;
exports.checkAnswer = checkAnswer;
exports.userList = userList;
exports.currentCorrectAnswer = currentCorrectAnswer;
exports.getPlayerId = getPlayerId;