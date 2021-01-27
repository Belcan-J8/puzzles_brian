#include "Logger.h"

#include "../lib/termcolor.hpp"
#include <iostream>

void Logger::Log(std::string string)
{
	std::cout << string << std::endl;
}
void BlueLogger::Log(std::string string)
{
	std::cout << termcolor::blue << string;
	std::cout << termcolor::reset << "" << std::endl;
}
void RedLogger::Log(std::string string)
{
	std::cout << termcolor::red << string;
	std::cout << termcolor::reset << "" << std::endl;
}
void YellowLogger::Log(std::string string)
{
	std::cout << termcolor::yellow << string;
	std::cout << termcolor::reset << "" << std::endl;
}
void CyanLogger::Log(std::string string)
{
	std::cout << termcolor::cyan << string;
	std::cout << termcolor::reset << "" << std::endl;
}
void MagentaLogger::Log(std::string string)
{
	std::cout << termcolor::magenta << string;
	std::cout << termcolor::reset << "" << std::endl;
}
