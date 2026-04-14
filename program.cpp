#include <iostream>
#include"windows.h"
#include "triangle.h"
using namespace std;
/**
	* @breaf создаёт точку
	*  * return точку
	*/
point creation();
/**
* @breaf создаёт 3 точки, по этим точкам создается треугольник,
	расчитываетс радиус вписанной окружности в этот треугольник
	и радиус описанной окружности около данного треугольника
	* @param A - точка
	* @param В - точка
	* @param С - точка
	* @param T - треугольник
*  * return 0
*/
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	point A = creation();
	point B = creation();
	point C = creation();
	triangle T(A, B, C);
	cout << "r = " << T.r() << endl;
	cout << "R = " << T.R();
	return 0;
}
point creation() {
	double x = 0, y = 0, z = 0;
	cout << "Point: ";
	cin >> x >> y >> z;
	return point(x, y, z);;
}
