#include <iostream>
#include <string>
#include "vehicle.h"

int main()
{
	vehicle vehicle1;


	vehicle1.setBrand("Toyota");
	vehicle1.setVehicleType("Car");
	vehicle1.setYear(2022);
	vehicle1.setSpeed(90);

	vehicle vehicle2("Volvo", "Truck", 2020);
	std::cout << "\n";
	vehicle2.setSpeed(70);

	std::cout << "--- Vehicle 1 --- \n\n";

	vehicle1.displayInfo();

	std::cout << "--- Vehicle 2 --- \n\n";

	vehicle2.displayInfo();

	std::cout << "\n";




	return 0;
}