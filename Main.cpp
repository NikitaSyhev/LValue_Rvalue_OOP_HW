
#include <iostream>
#include "Car.h"


int main() {
	setlocale(LC_ALL, "Russian");
	
	Car car1;
	
	Car car2;
	Car car3 {80, "HotHatch"};

	car1 = Car(60, "Sedan");  // ������� ������� Car ��������� rvalue � ���� ������
	//������������ Car(....)


	std::move(car3);














	return 0;
}