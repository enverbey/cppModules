#include "../include/Utils.hpp"
#include "../include/Colors.hpp"
#include <iostream>

Utils::Utils()
{}

Utils::~Utils()
{}

/*cout message and take input functions*/

std::string get_answer(std::string message)
{
	std::string result;

	result = "";
	(void)message;
	while (!std::cin.eof() && result == "")
	{
		std::cout << message;
		std::getline(std::cin, result);
	}
	return (result);
}

int	get_answer_int(std::string message)
{
	int	result;

	put_message_color(YELLOW, message);
	std::cin >> result;
	return (result);
}

/*take input functions*/

std::string	Utils::input_name(void)
{
	return(get_answer("Enter Name: > "));
}

std::string	Utils::input_lname(void)
{
	return(get_answer("Enter Last Name: > "));
}

std::string	Utils::input_pname(void)
{
	return(get_answer("Enter Nick Name: > "));
}

std::string	Utils::input_phone(void)
{
	return(get_answer("Enter Phone Number: > "));
}

std::string	Utils::input_dsecret(void)
{
	return(get_answer("Dark Secret: > "));
}

int	Utils::input_index(void)
{
	return (get_answer_int("Enter Index: > "));
}