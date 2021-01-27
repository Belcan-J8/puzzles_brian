#pragma once

#include <iostream>

class ColorSupport
{
public:
	typedef enum {
		blue,
		red,
		white
	} TextColor;

	std::ostream& GetColorStream(TextColor color);
private:
};
