#include "triangle.h"
#include "iostream"

using namespace std;
triangle::triangle(const point& E, const point& F, const point& G) : A(E), B(F), C(G)
{
	double ab_x = B.get_x() - A.get_x();
	double ab_y = B.get_y() - A.get_y();
	double ab_z = B.get_z() - A.get_z();

	double ac_x = C.get_x() - A.get_x();
	double ac_y = C.get_y() - A.get_y();
	double ac_z = C.get_z() - A.get_z();

	double i = ab_y * ac_z - ab_z * ac_y;
	double j = ab_z * ac_x - ab_x * ac_z;
	double k = ab_x * ac_y - ab_y * ac_x;

	double eps = numeric_limits<double>::epsilon();
	if (abs(i) > eps || abs(j) > eps || abs(k) > eps) {
		a = sqrt(pow(ab_x, 2) + pow(ab_y, 2) + pow(ab_z, 2));
		b = sqrt(pow(C.get_x() - B.get_x(), 2) + pow(C.get_y() - B.get_y(), 2) + pow(C.get_z() - B.get_z(), 2));
		c = sqrt(pow(ac_x, 2) + pow(ac_y, 2) + pow(ac_z, 2));
	}
	else {
		a = 0; b = 0; c = 0;
	}
}

const double triangle::p()
{
	return (a + b + c) / 2; 
}

const double triangle::r()
{
	double pp = p();
	return sqrt(((pp - a) * (pp - b) * (pp - c)) / pp);
}

const double triangle::S()
{
	double pp = p();
	return sqrt(pp * (pp - a) * (pp - b) * (pp - c));
}

const double triangle::R()
{
	return (a * b * c) / (4 * S());
}
