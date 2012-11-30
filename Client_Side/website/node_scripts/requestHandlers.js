var querystring = require("querystring");
var fileStream = require('fs');

/*
	Beschreibung:
	Start-Funktion
	Ertellt das Start-Html-Dokument
	Param: 	response - Ausgabe-Objekt
			postData - Eingangs-Daten
*/
function start(response, postData) {
	console.log("Request handler 'start' was called.");

	fileStream.readFile('/var/www/index.html', function(error, content) {
        if (error) {
            response.writeHead(500);
            response.end();
        }
        else {
            response.writeHead(200, { 'Content-Type': 'text/html' });
            response.end(content, 'utf-8');
        }
    });
}

/*
	Beschreibung:
	Upload-Funktion
	Gibt die empfangenen Daten wieder aus
	Param: 	response - Ausgabe-Objekt
			postData - Eingangs-Daten
*/
function upload(response, postData) {
	console.log("Request handler 'upload' was called.");
	response.writeHead(200, {"Content-Type": "text/plain"});
	response.write("You've sent: " + 
		querystring.parse(postData).text);	//In lesbaren Text umwandeln
	response.end();
}

function getFile(response, pathname, pathExt){
	
	var fs = require("fs");
	
	fs.readFile("/var/www" + pathname, "binary", function(error, file) {
		if(error) {
			response.writeHead(500, {"Content-Type": "text/plain"});
			response.write(error + "\n");
			response.end();
		} else {
			if (pathExt == ".png") {
				response.writeHead(200, {"Content-Type": "image/png"});
			} else if (pathExt == ".css") {
				response.writeHead(200, {"Content-Type": "text/css"});
			} else if (pathExt == ".js") {
				response.writeHead(200, {"Content-Type": "text/javascript"});
			}
			response.write(file, "binary");
			response.end();
		}
	 });
}

exports.start = start;
exports.upload = upload;
exports.getFile = getFile;
