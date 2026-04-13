#include "point.h"

bool point::operator==(const point p) const
{
	return (abs(this->x - p.x) < numeric_limits<double>::epsilon() && abs(this->y - p.y) < numeric_limits<double>::epsilon()
		&& abs(this->z - p.z) < numeric_limits<double>::epsilon());
}

bool point::operator!=(const point p)const
{
	return !(*this == p);
}

point& point::operator=(point& p)
{
	if (*this == p) {
		return *this;
	}
	x = p.x;
	y = p.y;
	z = p.z;
	return *this;
}

double point::get_x() {
	return x;
}
double point::get_y() {
	return y;
}
double point::get_z() {
	return z;
}
