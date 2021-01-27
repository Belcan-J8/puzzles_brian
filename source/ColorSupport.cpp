#include "ColorSupport.h"
#include "../libraries/termcolor/include/termcolor/termcolor.hpp"

std::ostream& ColorSupport::GetColorStream(TextColor color)
{
	switch (color)
	{
	case blue:
		return (std::cout << termcolor::blue);
	case red:
		return (std::cout << termcolor::red);
	default:
		return (std::cout << termcolor::reset);
	}
}