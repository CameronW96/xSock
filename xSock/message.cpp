#include "message.h"


Message::set_header(std::string t_header)
{
	header = t_header;
	return header.size();
}

Message::set_body(std::string t_body)
{
	body = t_body;
	return body.size();
}

Message::string get_header()
{
	return header;
}

Message::get_body()
{
	return body;
}