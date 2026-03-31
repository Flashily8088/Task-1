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
	point(double a, double b, double c) : x(a), y(b), z(c) {}
	/**
	* @breaf считывает абсциссу точки с клавиатуры
	*  * @return считанное значение
	*/
	double get_x();
	/**
	* @breaf сравнивает две точки
	* @param p - точка
	*  * return true если точки равны
	*/
	bool operator==(point p);
	/**
	* @breaf сравнивает две точки
	* * @param p - точка
	*  * return true если точки неравны
	*/
	bool operator!=(point p);
	/**
	* @breaf сравнивает две точки
	* * @param p - точка
	*  * return точку с новыми координатами равными координатам p
	*/
	point& operator=(point& p);
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

