#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					number;
		static const int	bit_num;
	public:
		Fixed();
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &copy);
		Fixed(int num);
		Fixed(float num);
		~Fixed();

		bool operator>(const Fixed &second) const;
		bool operator<(const Fixed &second) const;
		bool operator>=(const Fixed &second) const;
		bool operator<=(const Fixed &second) const;
		bool operator==(const Fixed &second) const;
		bool operator!=(const Fixed &second) const;

		Fixed operator+(const Fixed &second) const;
		Fixed operator-(const Fixed &second) const;
		Fixed operator*(const Fixed &second) const;
		Fixed operator/(const Fixed &second) const;

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
