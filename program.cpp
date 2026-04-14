#include <iostream>
#include"windows.h"
#include "triangle.h"
using namespace std;
/**
	* @breaf создаёт точку
	*  * return точку
	*/
point creation();
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
