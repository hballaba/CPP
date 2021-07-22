#include "Fixed.hpp"

Fixed::Fixed() {
    _raw = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &toCopy) {
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(toCopy);
}

Fixed &Fixed::operator= (const Fixed &toCopy) { 
    std::cout << "Assignation operator called" << std::endl;
    this->_raw = toCopy._raw;
    return (*this);
}

int		Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return(_raw);
}

void	Fixed::setRawBits( int const raw ) {
	_raw = raw;
}

Fixed::Fixed(const int raw) {
    std::cout << "Int constructor called" << std::endl;
    this->_raw = raw * (1 << _bits);
}

Fixed::Fixed(const float fraw) {
    std::cout << "Float constructor called" << std::endl;
   _raw = (int)(std::roundf((fraw * (1 << _bits))));
}


float   Fixed::toFloat( void ) const {
    return ((float)_raw / (1 << _bits));
}

int		Fixed::toInt( void ) const {
	return (_raw / (1 << _bits));
}

std::ostream & operator << (std::ostream& stream, const Fixed& fix) {
    stream << fix.toFloat();
    return (stream);
}