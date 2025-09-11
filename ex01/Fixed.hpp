#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					number;
		static const int	bit_num;
	public:
		Fixed();
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &copy);
		~Fixed();


		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
