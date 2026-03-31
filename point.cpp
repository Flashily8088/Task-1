#include "point.h"

bool point::operator==(point p)
{
	if (this->x == p.x && this->y == p.y && this->z == p.z) return true;
	else return false;
}

bool point::operator!=(point p)
{
	return !(*this == p);
}

point& point::operator=(point& p)
{
	if (*this == p) {
		return *this;
	}
	else {
		x = p.x;
		y = p.y;
		z = p.z;
		return *this;
	}
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