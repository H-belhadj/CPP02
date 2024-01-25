/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:53:53 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/01/25 18:09:48 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "copy constructor called" << std::endl;
    this->setRawBits(other.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "copy assignment operator called" << std::endl;
    if(this != &other)
        this->setRawBits(other.getRawBits());
    return *this;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    value = num << bits;
}
Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    value = roundf(nb * (1 << bits));
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}
float Fixed::toFloat(void) const
{
    return ((float)value / (1 << bits));
}

int Fixed::toInt(void) const
{
    return (value >> bits);
}

std::ostream& operator<<(std::ostream& COUT, Fixed const &i)
{
	COUT << i.toFloat();
	return (COUT);
}

bool Fixed::operator==(const Fixed& other) const
{
    return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (this->getRawBits() != other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) const
{
    return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>(const Fixed& other) const
{
    return (this->getRawBits() < other.getRawBits());
}	

bool Fixed::operator<=(const Fixed& other) const
{
    return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) const
{
    return (this->getRawBits() >= other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other) const
{
    return(Fixed(this->getRawBits() + other.getRawBits()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return(Fixed(this->getRawBits() - other.getRawBits()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return(Fixed(this->getRawBits() * other.getRawBits()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return(Fixed(this->getRawBits() / other.getRawBits()));
}

Fixed&  Fixed::operator++()
{
    ++value;
    return (*this);
}

Fixed&  Fixed::operator--()
{
    --value;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++value;
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    --value;
    return tmp;
}