#include "../include/PhoneBook.hpp"
#include "../include/Colors.hpp"
#include <iostream>

void	ft_banner(void)
{
	system("clear");
	std::cout << "/***************************************************************\\" << std::endl;
	std::cout << "/*             There are 3 command you can enter.              *\\" << std::endl;
	std::cout << "/* ----------------------------------------------------------- *\\" << std::endl;
	std::cout << "/* ADD: This command add a new person in PhoneBook             *\\" << std::endl;
	std::cout << "/* SEARCH: This command display all person in PhoneBook person *\\" << std::endl;
	std::cout << "/* EXIT: This command fınısh the program                       *\\" << std::endl;
	std::cout << "/*                                                             *\\" << std::endl;
	std::cout << "/*  -> after ADD, you must enter the requested information     *\\" << std::endl;
	std::cout << "/* in order, you can't enter empty input for the information!! *\\" << std::endl;
	std::cout << "/*  -> after SEARCH, you enter the index number of the person  *\\" << std::endl;
	std::cout << "/* whose information you want to see.                          *\\" << std::endl;
	std::cout << "/***************************************************************\\\n" << std::endl;
}

int main(void)
{
	std::string str;
	ft_banner();
	PhoneBook list;
	while (str !=  "EXIT")
	{
		put_message_color(BLUE, "Enter a command > ");
		std::cin >> str;
		if (str == "ADD")
			list.add();
		else if (str == "SEARCH")
			list.search();
	
	}

}