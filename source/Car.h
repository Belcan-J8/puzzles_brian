#pragma once

#include "FuelGauge.h"
#include "Logger.h"
#include "ColorSupport.h"

class Car
{
public:
	Car();
	void TurnLeft();
	void TurnRight();
	void Accelerate();
private:
	FuelGauge fuelGauge;
	ILogger* logger;
	ColorSupport::TextColor outputColor;
};
