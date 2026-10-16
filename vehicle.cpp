#include "vehicle.h"
#include <string>
#include <iostream>

vehicle::vehicle()
{
	brand = "unknown";
	vehicleType = "unknown";
	year = 0;
	speed = 0;

	std::cout << "default constructor called: " << brand << std::endl;
}
vehicle::vehicle(std::string _brand, std::string _vehicletype, int _year, int _speed)
{
	brand = _brand;
	vehicleType = _vehicletype;
	year = _year;
	speed = _speed;

	std::cout << "parameterized constructor called " << brand << std::endl;
}
vehicle::~vehicle()
{
	std::cout << "vehicle destroyed: " << brand << std::endl;
}
void vehicle::setBrand(std::string _brand)
{
	brand = _brand;
}
std::string vehicle::getBrand()
{
	return brand;
}
void vehicle::setVehicleType(std::string _VehicleType)
{
	vehicleType = _VehicleType;
}
std::string vehicle::getVehicleType()
{
	return vehicleType;
}
void vehicle::setYear(int _year)
{
	year = _year;
}
int vehicle::getYear()
{
	return year;
}
void vehicle::setSpeed(int _speed)
{
	speed = _speed;
}
int vehicle::getSpeed()
{
	return speed;
}

void vehicle::displayInfo()
{
	std::cout << "Brand: " << brand << std::endl;
	std::cout << "Type: " << vehicleType << std::endl;
	std::cout << "Year: " << year << std::endl;
	std::cout << "Speed: " << speed << " km/h " << std::endl;
}