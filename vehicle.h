#pragma once
#include <string>
class vehicle
{
private:
	std::string brand;
	std::string vehicleType;
	int year;
	int speed;
public:

	vehicle();
	vehicle(std::string _brand, std::string _vehicletype, int _year, int _speed = 0);
	~vehicle();

	void setBrand(std::string _brand);
	std::string getBrand();
	void setVehicleType(std::string _vehicletype);
	std::string getVehicleType();
	void setYear(int _year);
	int getYear();
	void setSpeed(int _speed);
	int getSpeed();
	void displayInfo();
};

