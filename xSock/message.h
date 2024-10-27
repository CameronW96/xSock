#pragma once
class Message
{
private:
	std::string header;
	std::string body;

public:
	int set_header(std::string t_header);
	int set_body(std::string t_body);
	std::string get_header();
	std::string get_body();
};

