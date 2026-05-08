#include "point.h"

point::point() : x(0), y(0), z(0) {}
point::point(const double a, const double b, const double c) : x(a), y(b), z(c) {}
bool point::operator==(const point p) const
{
	return (abs(this->x - p.x) < numeric_limits<double>::epsilon() && abs(this->y - p.y) < numeric_limits<double>::epsilon()
		&& abs(this->z - p.z) < numeric_limits<double>::epsilon());
}

bool point::operator!=(const point p)const
{
	return !(*this == p);
}

point& point::operator=(const point& p)
{
	if (*this == p) {
		return *this;
	}
	x = p.x;
	y = p.y;
	z = p.z;
	return *this;
}

double point::get_x() const {
	return x;
}
double point::get_y() const {
	return y;
}
double point::get_z() const {
	return z;
}
