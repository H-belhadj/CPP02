/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:18:59 by hbelhadj          #+#    #+#             */
/*   Updated: 2024/01/24 17:34:55 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int value;
        static const int bitsl;
    
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed& operator=(const Fixed& other);
        ~Fixed();    
        float   toFloat( void ) const;
        int     toInt( void ) const;
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};
//overloading («)   

#endif

