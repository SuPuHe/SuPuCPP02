/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:00:31 by omizin            #+#    #+#             */
/*   Updated: 2025/09/18 10:00:32 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit_num = 8;

Fixed::Fixed(): number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->number = copy.getRawBits();
	return *this;
}

Fixed::Fixed(int num)
{
	std::cout << "Int constructor called" << std::endl;
	number = num << bit_num;
}

Fixed::Fixed(float num)
{
	std::cout << "Float constructor called" << std::endl;
	number = roundf(num * (1 << bit_num));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const { return number; }

void Fixed::setRawBits( int const raw ) {number = raw;}

float Fixed::toFloat( void ) const { return (float)number / (1 << bit_num); }

int Fixed::toInt( void ) const { return number >> bit_num; }

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
