#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point(float x, float y);
		Point(Point const &copy);
		Point &operator=(Point const &copy) = delete;
		~Point();

		const Fixed &getX() const;
		const Fixed &getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
