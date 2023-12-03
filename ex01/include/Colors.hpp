#ifndef COLORS_HPP
#define COLORS_HPP

#include <iostream>

#define END_COLOR "\033[0m"
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGANTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

void	put_message_color(std::string color, std::string str);

#endif