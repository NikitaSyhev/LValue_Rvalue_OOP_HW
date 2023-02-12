#include "Car.h"
#include <algorithm>

Car::Car(int speed, std::string carType): _speed(speed), _carType(carType) {
}

Car::Car()
{
}

void Car::Speed()
{
	std::cout << "Speed" << std::endl;
}

void Car::Acceleration()
{
	std::cout << "Acceleration" << std::endl;
}

Car& Car::operator=(Car&& other) noexcept
{
	
	std::swap(_speed, other._speed);
	std::swap(_carType, other._carType);
	return *this;	
}
