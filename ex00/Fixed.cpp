/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:37:16 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/01/22 19:02:58 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits()const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->bits;
}

void Fixed::setRawBits(int const raw)
{
    this->bits = raw;
}