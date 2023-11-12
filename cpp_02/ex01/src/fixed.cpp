/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:11:10 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/12 18:04:12 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fixed.hpp"

Fixed::Fixed() : n(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int i) {
    std::cout << "Int constructor called" << std::endl;
    this->n = i << c; // Convert integer to fixed-point value and store in 'n'
}

//n((int)roundf(f * (1 << _c)))
Fixed::Fixed(const float f) {
    std::cout << "Float constructor called" << std::endl;
    this->n = static_cast<int>(f * (1 << c)); // Convert float to fixed-point value and store in 'n'
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->n = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	return (this->n);
}

void Fixed::setRawBits( int const raw )
{
	this->n = raw;
}

//(int)(roundf((float)this->n / (1 << this->c)))
float Fixed::toFloat( void ) const
{
	return (static_cast<float>(n) / (1 << c));
}

int Fixed::toInt( void ) const
{
	 return (n >> c);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
