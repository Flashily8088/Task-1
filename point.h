#include <iostream>
using namespace std;
/**
* @breaf класс точка
*/
class point {
	/**
	* @breaf абсцисса
	*/
	double x;
	/**
	* @breaf ордината
	*/
	double y;
	/**
	* @breaf аппликата
	*/
	double z;
public:
	/**
	* @breaf конструктор по умолчанию
	*/
	point() : x(0), y(0), z(0) {}
	/**
	* @breaf конструктор
	* @param a - абсцисса
	* @param b - ордината
	* @param c - аппликата
	*/
	point(const double a, const double b, const double c) : x(a), y(b), z(c) {}
	/**
	* @breaf считывает абсциссу точки с клавиатуры
	*  * @return считанное значение
	*/
	bool operator==(const point p) const;
	/**
	* @breaf сравнивает две точки
	* * @param p - точка
	*  * return true если точки неравны
	*/
	bool operator!=(const point p) const;
	/**
	* @breaf сравнивает две точки
	* * @param p - точка
	*  * return точку с новыми координатами равными координатам p
	*/
	point& operator=(point& p);
	/**
	* @breaf считывает абсциссу точки с клавиатуры
	* * @return считанное значение
	*/
	double get_x();
	/**
	* @breaf считывает ординату точки с клавиатуры
	* * @return считанное значение
	*/
	double get_y();
	/**
	* @breaf считывает аппликату точки с клавиатуры
	* * @return считанное значение
	*/
	double get_z();
};

