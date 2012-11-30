/*
	Beschreibung:
	Route-Funktion
	Routet anhand des Pfades (Funktion) an den entsprechenden Handler weiter
	Param: 	handle - Obejkt des RequestHandler-Moduls
			pathname - Pfad (Funktion) aus der URL
			response - Ausgabe-Objekt
			postData - Eingangs-Daten
*/
function route(handle, pathname, response, postData) {
	
	var Path = require("path");
	
	console.log("About to route a request for " + pathname);
	//console.log(Path.extname(pathname));	//temporär
	//console.log(pathname);	//temporär
	
	//Wenns es eine gleichnamige Funktion gibt ...
	if (typeof handle[pathname] === 'function') {
		return handle[pathname](response, postData);
	//... oder es sich um eine PNG-Anfrage handelt ...	
	} else if (Path.extname(pathname) == ".png" || Path.extname(pathname) == ".js" || Path.extname(pathname) == ".css") {
		//console.log("... isn PNG! Oo");
		//return handle[".png"](response, pathname);
		return handle["file"](response, pathname, Path.extname(pathname));
	//... sonst	
	} else {		
		//Keine passende Funktion gefunden
		console.log("No request handler found for " + pathname);
		response.writeHead(404, {"Content-Type": "text/plain"});
		response.write("404 Not found");
		response.end();
	}
}

exports.route = route;
