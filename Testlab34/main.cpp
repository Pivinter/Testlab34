#include "pch.h"
// Lab_03_4.cpp
// < Кулявець Владислав Романович >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 012
#include <iostream>
using namespace std;
int main()
{
	double R; // вхідний параметр
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if ((y <= R + sqrt(R*R + (x-R)* (x - R)) && y >= 0 && x <= 0) ||
		(y <= -R + sqrt(R * R + (x + R) * (x + R)) && x >= 0 && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
