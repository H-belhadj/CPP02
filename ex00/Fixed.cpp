/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:37:16 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/01/22 19:08:08 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->bits = 0;
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


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->bits;
}

void Fixed::setRawBits(int const raw)
{
    this->bits = raw;
}