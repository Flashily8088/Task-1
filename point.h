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
	point();
	/**
	* @breaf конструктор
	* @param a - абсцисса
	* @param b - ордината
	* @param c - аппликата
	*/
	point(const double a, const double b, const double c);
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
	double get_x() const;
	/**
	* @breaf считывает ординату точки с клавиатуры
	* * @return считанное значение
	*/
	double get_y() const;
	/**
	* @breaf считывает аппликату точки с клавиатуры
	* * @return считанное значение
	*/
	double get_z() const;
};

