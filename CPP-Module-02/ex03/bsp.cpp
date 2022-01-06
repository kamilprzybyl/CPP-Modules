#include "Point.hpp"

// float sign (Point p1, Point p2, Point p3)
// {
// 	// return (p1.getX().toFloat() - p3.getX().toFloat())
// 	// 		* (p2.getY().toFloat() - p3.getY().toFloat()) - (p2.getX().toFloat() - p3.getX().toFloat())
// 	// 		* (p1.getY().toFloat() - p3.getY().toFloat());
// 	return (p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat()) - (p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat());
// }

// bool	bsp( Point const a, Point const b, Point const c, Point const point) {

// 	float	d1, d2, d3;
// 	bool	has_neg, has_pos;

// 	d1 = sign(point, a, b);
// 	d2 = sign(point, b, c);
// 	d3 = sign(point, c, a);

// 	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
// 	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

// 	return !(has_neg && has_pos);
// }

float	area(Point p1, Point p2, Point p3) {

	return abs((p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) + p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) + p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat()))/2.0);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point) {

	float	A = area (a, b, c);
	float	A1 = area (point, b, c);
	float	A2 = area (point, a, c);
	float	A3 = area (point, a, b);

	return (A == A1 + A2 + A3);
}
