#pragma once

#include <asio.hpp>

using asio::ip::tcp;

class Serv_Con
{
public:
	Serv_Con(asio::io_context& t_io_context, tcp::acceptor& t_acceptor);
	void listen();

private:
	tcp::acceptor& acceptor;
	asio::io_context& io;

};

