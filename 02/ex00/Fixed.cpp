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
     this->_raw = toCopy.getRawBits(); 
       return (*this);
}

int		Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return(_raw);
}

void	Fixed::setRawBits( int const raw ) {
   _raw = raw;
}