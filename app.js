/*eslint-env node, express*/

//------------------------------------------------------------------------------
// node.js starter application for Bluemix
//------------------------------------------------------------------------------

// This application uses express as its web server
// for more info, see: http://expressjs.com
var express = require("express");

// cfenv provides access to your Cloud Foundry environment
// for more info, see: https://www.npmjs.com/package/cfenv
var cfenv = require("cfenv");

// create a new express server
var app = express();
	
//add http&socket module
var http = require("http").Server(app);	
var io = require("socket.io")(http);	
	
// serve the files out of ./public as our main files
app.use(express.static(__dirname + "/public"));


io.on("connection",function(socket){
	
	socket.on("String",function(key){	
		if(key == "w" || key == "s" || key == "a" || key == "d"){	
			console.log("Received " + key + " from frontend");
			
			//************************
			//fill in a method "io.sockets.emit(param1,param2)" in line 35
			//The first parameter is the data type "message", the second parameter is the data you want to send
			io.sockets.emit("message", key);		
		}
		else{
			console.log("Not a direction order");
		}	
	});
			
});

// get the app environment from Cloud Foundry
var appEnv = cfenv.getAppEnv();

// start server on the specified port and binding host

http.listen(appEnv.port, "0.0.0.0", function() {
  // print a message when the server starts listening
  console.log("server starting on " + appEnv.url + " " + appEnv.port);
});
