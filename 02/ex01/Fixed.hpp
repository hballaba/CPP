#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>
# include <sstream>
# include <cmath>

class Fixed {

private:
    int _raw;
    static const int _bits = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &toCopy);
    Fixed	&operator = (const Fixed &toCopy);
	Fixed(const int raw);
	Fixed(const float fraw);

    int		getRawBits( void ) const;    
	void	setRawBits( int const raw );
    float	toFloat( void ) const; 
    int		toInt( void ) const;
};

std::ostream &operator << (std::ostream& stream, const Fixed& fix);

#endif
