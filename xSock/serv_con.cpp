#include "serv_con.h"
#include "User.h"


Serv_Con::Serv_Con(asio::io_context& t_io_context, tcp::acceptor& t_acceptor) : io(t_io_context), acceptor(t_acceptor)
{

}

void Serv_Con::listen()
{
	acceptor.async_accept(
		[this](std::error_category, tcp::socket sock)
		{
			std::make_shared<User>(std::move(sock));
		}
	);
}