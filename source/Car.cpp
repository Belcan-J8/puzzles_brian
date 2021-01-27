#include "Car.h"

Car::Car()
	: logger(new BlueLogger())
{
}
void Car::TurnLeft()
{
	((Logger*)logger)->Log("Turning left", outputColor);
	fuelGauge.DecrementFuelLevel();
}
void Car::TurnRight()
{
	((Logger*)logger)->Log("Turning right", outputColor);
	fuelGauge.DecrementFuelLevel();
}
void Car::Accelerate()
{
	((Logger*)logger)->Log("Moving ahead", outputColor);
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}
