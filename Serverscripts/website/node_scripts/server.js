


//ToDo: In Config-Datei auslagern
var defaultPort = 80;
var encodingStr = "utf8";

/*
	Beschreibung:
	Servermodul
	Wird aus der index.js aufgerufen.
	Startet den HTTP-Server und reagiert auf Anfragen und die Data- bzw. End-Event der Anfrage.
	Lauscht auf Port: defaultPort (80)
	Param: 	route - Objekt des Router-Moduls
			handle - Objekt des RequestHandler-Moduls
*/
function start(route, handle) {
	var server = require("http").createServer(onRequest);
	var io = require("socket.io").listen(server);
	
	var ioHandler = require("./ioHandler");
	var url = require("url");
	
	//Server erstellen und Port zuweisen
	//server = http.createServer(onRequest);
	server.listen(defaultPort);
	

	//Auf Anfrage reagieren
	function onRequest(request, response) {
		//Daten die vom Client gesendet werden
		var postData = "";
		//Pfad aus URL
		var pathname = url.parse(request.url).pathname;
		console.log("Request for " + pathname + " received.");
		
		request.setEncoding(encodingStr);
		
		//Listener fuer Data-Event
		//Daten kommen "Schnipsel"-weise (Chunk)
		request.addListener("data", function(postDataChunk) {
			postData += postDataChunk;
			console.log("Received Post data chunk '" + 
				postDataChunk + "'.");
		});

		//Listener fuer End-Event
		request.addListener("end", function() {
			//Dateneingang abgeschlossen - Werte an der Router weiter leiten
			route(handle, pathname, response, postData);
		});

		//route(handle, pathname, response);

		//response.writeHead(200, {"Content-Type": "text/plain"});
		//var content = route(handle, pathname);
		//response.write(content);
		//response.end();
	}
	
	console.log("Server has started.");

	//Socket mit Server verbinden	
	ioHandler.handleEvents(io);

	
}

exports.start = start;
