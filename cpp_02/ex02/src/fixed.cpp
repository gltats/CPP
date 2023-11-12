/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:07:52 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/12 18:15:59 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fixed.hpp"

/*
*	CONSTRUCTOR
*/ 

Fixed::Fixed() : n(0)
{}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::Fixed(const int i) {
    this->n = i << c; // Convert integer to fixed-point value and store in 'n'
}

//n((int)roundf(f * (1 << _c)))
Fixed::Fixed(const float f) {
    this->n = static_cast<int>(f * (1 << c)); // Convert float to fixed-point value and store in 'n'
}


/*
*	DESTRUCTOR
*/

Fixed::~Fixed()
{}


/*
*	OPERATORS
*/
Fixed	&Fixed::operator=(const Fixed &fixed)
{
	this->n = fixed.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}



/*
*	OTHER FUNCTIONS
*/
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

