var server = require("./server");
var router = require("./router");
var requestHandlers = require("./requestHandlers");

//Pfade bzw. Befehle für den Handler deklarieren
var handle = {}
handle["/"] = requestHandlers.start;
handle["/start"] = requestHandlers.start;
handle["/upload"] = requestHandlers.upload;
//handle[".png"] = requestHandlers.getPng;
handle["file"] = requestHandlers.getFile;

//Server starten -> server.js
server.start(router.route, handle);
