#pragma once

#include "Logger.h"
#include "ColorSupport.h"

class FuelGauge
{
public:
	FuelGauge();
	void DecrementFuelLevel();
private:
	int fuelLevel;
	ILogger* logger;
	ColorSupport::TextColor outputColor;
};
