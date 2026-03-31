#include <iostream>
#include"windows.h"
#include "triangle.h"
using namespace std;

point creation() {
	double x = 0, y = 0, z = 0;
	cout << "Введите координаты точки: ";
	cin >> x >> y >> z;
	return point(x, y, z);;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	point A = creation();
	point B = creation();
	point C = creation();
	A = B;
	triangle T(A, B, C);
	cout << "Радиус вписанной в данный треугольник окружности: r = " << T.r() << endl;
	cout << "Радиус окружности описанной около данного треугольника: R = " << T.R();
	return 0;
}