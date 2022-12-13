#pragma once

#include <deque>

#include "asio.hpp"
#include "message.h"
#include "serv_con.h"
#include "User.h"

class XServer
{
public:
	XServer();
	Message get_next_msg();
	int send_msg(const User& t_user);

private:
	std::deque<User> user_que;
	std::deque<Message> msg_que;


};

// Define user class

// Define connection class

// Define message class

// Define method for handling requests

// Server should run in the background and allow the user to pull messages at will
	// Stack messages in a deque and provide a function to retrieve the next message
	// Connection needs to be asynchronus - have a process_message callback that interprets the message and loads it into the deque (or maybe just a que?)