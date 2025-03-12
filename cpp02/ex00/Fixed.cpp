#include "Fixed.hpp"

const int Fixed::_frac = 8;

Fixed::Fixed(void): _value(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    _value = value << _frac;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _frac));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}


Fixed   &Fixed::operator=(Fixed const &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &copy)
    {
        _value= copy.getRawBits();
    }
    return(*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}
