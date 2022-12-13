#pragma once

#include "asio.hpp"
#include "User.h"

class XServer
{
	// Define user class

	// Define connection class

	// Define method for handling requests

	// Server should run in the background and allow the user to pull messages at will
		// Stack messages in a deque and provide a function to retrieve the next message
		// Connection needs to be asynchronus - have a process_message callback that interprets the message and loads it into the deque (or maybe just a que?)


};

