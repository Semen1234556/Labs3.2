// Lab_03_2.cpp
// < Довголуцький Семен >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 19



#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	double a;
	double b;
	double c;
	double F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	// 1 спосіб
	if (x < 5 && b != 0) {
		F = a * pow((x + 7), 2) - b;
	};
	if (x > 5 && b != 0) {
		F = (x-c*a)/(a*x);
	};
	if (!(x < 5 && c != 0) && !(x > 5 && b != 0)) {
		F = x/c;
	}
	cout << endl;
	cout << "1) F = " << F << endl;

	// 2 спосіб
	if (x < 5 && b != 0) {
		F = a * pow((x + 7), 2) - b;
	}
	else if (x > 5 && b != 0) {
		F = (x - c * a) / (a * x);
	}
	else {
		F = x / c;
	}
	cout << endl;
	cout << "2) F = " << F << endl;



}

