#include "Logger.h"

#include <iostream>

void Logger::Log(std::string string)
{
	std::cout << string << std::endl;
}

void Logger::Log(std::string string, ColorSupport::TextColor color)
{
	col.GetColorStream(color) << string;

	// Write a blank string with default color to reset the color. Prevents color bleed.
	col.GetColorStream(col.white) << "" << std::endl;
}
