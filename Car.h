#pragma once
#include <iostream>

class Car
{
public:
	explicit Car(int speed, std::string _carType);
	Car();
	void Speed();
	void Acceleration();
	Car& operator=(Car&& other) noexcept;

private:
	int _speed;
	std::string _carType;
};

