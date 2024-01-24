/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:18:56 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/01/24 18:49:20 by hbelhadj         ###   ########.fr       */
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

Fixed::Fixed(int ref)
{
    (void)ref;
    this->value *= std::pow(ref, bits); 
    std::cout << "the value if " << this->value << std::endl;
}
// Fixed::Fixed(float rif)
// {
// }
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
//function toFloat
float   Fixed::toFloat(void)const
{
    return this->value;   
}

//function toInt

int   Fixed::toInt(void)const
{
    return this->value;   
}