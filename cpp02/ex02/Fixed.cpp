#include "Fixed.hpp"

const int Fixed::_frac = 8;

Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed(const int value)
{
    _value = value << _frac;
}

Fixed::Fixed(const float value)
{
    _value = roundf(value * (1 << _frac));
}

Fixed::Fixed(Fixed const &copy)
{
    *this = copy;
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(Fixed const &copy)
{
    if (this != &copy)
        _value = copy.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    return _value;
}

void Fixed::setRawBits(int const raw)
{
    _value = raw;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(_value) / (1 << _frac);
}

int Fixed::toInt(void) const
{
    return _value >> _frac;
}

// --- Comparaison ---
bool Fixed::operator>(Fixed const &other) const
{
    return _value > other._value;
}

bool Fixed::operator<(Fixed const &other) const
{
    return _value < other._value;
}

bool Fixed::operator>=(Fixed const &other) const
{
    return _value >= other._value;
}

bool Fixed::operator<=(Fixed const &other) const
{
    return _value <= other._value;
}

bool Fixed::operator==(Fixed const &other) const
{
    return _value == other._value;
}

bool Fixed::operator!=(Fixed const &other) const
{
    return _value != other._value;
}

// --- Arithmétique ---
Fixed Fixed::operator+(Fixed const &other) const
{
    Fixed result;
    result.setRawBits(this->_value + other._value);
    return result;
}

Fixed Fixed::operator-(Fixed const &other) const
{
    Fixed result;
    result.setRawBits(this->_value - other._value);
    return result;
}

Fixed Fixed::operator*(Fixed const &other) const
{
    Fixed result;
    long temp = static_cast<long>(this->_value) * static_cast<long>(other._value);
    result.setRawBits(static_cast<int>(temp >> _frac));
    return result;
}

Fixed Fixed::operator/(Fixed const &other) const
{
    Fixed result;
    long temp = (static_cast<long>(this->_value) << _frac);
    result.setRawBits(static_cast<int>(temp / other._value));
    return result;
}

Fixed &Fixed::operator++()
{
    ++_value;
    return *this;
}

Fixed &Fixed::operator--()
{
    --_value;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++_value;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --_value;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
    os << fixed.toFloat();
    return os;
}
