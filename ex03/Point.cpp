#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(float x, float y): _x(x), _y(y)
{
	std::cout << "Constructor called" << std::endl;
}

Point::Point(Point const &copy): _x(copy._x), _y(copy._y)
{
	std::cout << "Copy constructor called" << std::endl;
}

Point::~Point()
{
	std::cout << "Destructor called" << std::endl;
}

const Fixed &Point::getX() const { return _x; }
const Fixed &Point::getY() const { return _y; }
