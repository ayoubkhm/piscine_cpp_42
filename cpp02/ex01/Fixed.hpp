#ifndef FIXED_HPP

#   define FIXED_HPP
#   include <iostream>
#   include <cmath>

class Fixed
{
    private:
        int _value;
        static const int _frac;


    public:
        Fixed(void);
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed(void);
        Fixed(Fixed const &copy);
        Fixed &operator=(Fixed const &copy);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float  toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, Fixed const &fixed);

#endif
