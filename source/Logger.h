#pragma once

#include <string>
#include "ColorSupport.h"

struct ILogger
{
	virtual void Log(std::string string) = 0;
};

class Logger : public ILogger
{
public:
	void Log(std::string string);
	void Log(std::string string, ColorSupport::TextColor color);
private:
	ColorSupport col;
};
