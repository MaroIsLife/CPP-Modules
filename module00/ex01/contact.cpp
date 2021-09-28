#include <iostream>
#include "contact.hpp"

Contact::Contact()
{
	this->instance = 0;
}

Contact::~Contact()
{
	this->cmd = "1";

}

std::string read()
{
	std::string cmd;
	char c;
	
	std::cout << "Insert a Command: ";
	std::cin >> cmd;
	return (cmd);
}

std::string Contact::get_var(std::string foo, int id)
{
	if (foo == "cmd")
		return (this->cmd);
	else if (foo == "first_name")
		return (this->first_name[id]);
	else if (foo == "last_name")
		return (this->last_name[id]);
	else if (foo == "nickname")
		return (this->nickname[id]);
	else if (foo == "phone_number")
		return (this->phone_number[id]);
	else if (foo == "darkest_secret")
		return (this->darkest_secret[id]);
	return (0);
}

void Contact::set_var(std::string foo, std::string set, int id)
{
	if (foo == "cmd")
		this->cmd = set;
	else if (foo == "first_name")
		this->first_name[id] = set;
	else if (foo == "last_name")
		this->last_name[id] = set;
	else if (foo == "nickname")
		this->nickname[id] = set;
	else if (foo == "phone_number")
		this->phone_number[id] = set;
	else if (foo == "darkest_secret")
		this->darkest_secret[id] = set;
}

void add(Contact *abc)
{
	std::string test;

	std::cout << "Enter the First Name: ";
	std::cin >> test;
	abc->set_var("first_name", test ,abc->instance);
	std::cout << "Enter the Last Name: ";
	std::cin >> test;
	abc->set_var("last_name", test ,abc->instance);
	std::cout << "Enter the Nickname: ";
	std::cin >> test;
	abc->set_var("nickname", test ,abc->instance);
	std::cout << "Enter the Phone Number: ";
	std::cin >> test;
	abc->set_var("phone_number", test ,abc->instance);
	std::cout << "Enter the Darkest Secret: ";
	std::cin >> test;
	abc->set_var("darkest_secret", test ,abc->instance);
	if (abc->instance == 8)
		abc->instance = 0;
	else
		abc->instance++;
}


int main()
{
	std::string cmd;
	Contact abc;

	while(1)
	{
		cmd = read();
		if (cmd == "EXIT")
			exit(0);
		else if (cmd == "ADD")
			add(&abc);
	}

	return (0);
}