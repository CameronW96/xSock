#pragma once

#include <iostream>

#include "asio.hpp"

class User
{
public:
	User(int t_id, std::string t_name, asio::ip::tcp::socket sock);
	//static int generate_id();

private:
	int id;
	std::string name;

};

