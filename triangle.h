#include <iostream>
#include <cmath>
#include "point.h"

/**
	* @breaf класс треугольник
	*/
class triangle{
	/**
	* @breaf первая вершина треугольника
	*/
	point A;
	/**
	* @breaf вторая вершина треугольника
	*/
	point B;
	/**
	* @breaf третья вершина треугольника
	*/
	point C;
	/**
	* @breaf первая сторона треугольника
	*/
	double a;
	/**
	* @breaf вторая сторона треугольника
	*/
	double b;
	/**
	* @breaf третья сторона треугольника
	*/
	double c;

	/**
	* @breaf Расчёт полупериметра
	* @return рассчитанное значение
	 */
	const double p();
public:
	/**
	* @breaf конструктор
	* @param A - первая вершина треугольника
	* @param B - вторая вершина треугольника
	* @param C - третья вершина треугольника
	 */
	triangle(const point& E, const point& F, const point& G);
	
	/**
	* @breaf Расчёт радиуса вписанной в треугольник окружности
	* @return рассчитанное значение
	 */
	double r() const;
	/**
	* @breaf Расчёт площади
	* @return рассчитанное значение
	 */
	double S() const;
	/**
	* @breaf Расчёт радиуса описанной около треугольника окружности
	* @return рассчитанное значение
	 */
	double R() const;
};

