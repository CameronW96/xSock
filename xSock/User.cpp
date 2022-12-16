#include "User.h"


User::User(int t_id, std::string t_name, asio::ip::tcp::socket sock) : id(t_id), name(t_name)
{

}

