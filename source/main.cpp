#include "Car.h"
#include "Logger.h"

int main(int argc, char* argv[])
{
	Logger logger;

	logger.Log("Starting application");

	Car car[2] = {Car(new CyanLogger()), Car(new MagentaLogger())};
	for (int i = 0; i < 2; i++)
	{
		car[i].TurnLeft();
		car[i].TurnRight();
		car[i].Accelerate();
	}

	logger.Log("Exiting application");
}
