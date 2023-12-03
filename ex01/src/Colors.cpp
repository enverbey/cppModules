#include "../include/Colors.hpp"
#include <iostream>

void	put_message_color(std::string color, std::string str)
{
	std::cout << color << str << END_COLOR;
}