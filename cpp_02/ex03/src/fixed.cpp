/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:24:13 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/21 12:23:35 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
	this->n = static_cast<int>(roundf(f * (1 << c)));  // Convert float to fixed-point value and store in 'n'
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

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

bool Fixed::operator > (const Fixed &fixed1)
{
	return (this->toFloat() > fixed1.toFloat());
}

bool Fixed::operator < (const Fixed &fixed1)
{
	return (this->toFloat() < fixed1.toFloat());
}

bool Fixed::operator >= (const Fixed &fixed1)
{
	return (this->toFloat() >= fixed1.toFloat());
}

bool Fixed::operator <= (const Fixed &fixed1)
{
	return (this->toFloat() <= fixed1.toFloat());
}

bool Fixed::operator == (const Fixed &fixed1)
{
	return (this->toFloat() == fixed1.toFloat());
}

bool Fixed::operator != (const Fixed &fixed1)
{
	return (this->toFloat() != fixed1.toFloat());
}

float Fixed::operator + (const Fixed &fixed1)
{
	return (this->toFloat() + fixed1. toFloat());
}

float Fixed::operator - (const Fixed &fixed1)
{
	return (this->toFloat() - fixed1. toFloat());
}

float Fixed::operator * (const Fixed &fixed1)
{
	return (this->toFloat() * fixed1. toFloat());
}

float Fixed::operator / (const Fixed &fixed1)
{
		return (this->toFloat() / fixed1. toFloat());
}

float Fixed::operator ++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (this->toFloat());
}

float Fixed::operator ++(int)
{
	float temp;
	temp = this->toFloat();
	this->setRawBits(this->getRawBits() + 1);
	return (temp);
}

Fixed Fixed::min (const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.toFloat() < fixed2.toFloat())
		return (fixed1);
	return (fixed2);
}

Fixed Fixed::min (Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

//return a reference to the maximum value between 'a' and 'b'
Fixed & Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

//return a reference to the maximum value between 'a' and 'b' (const version)
const Fixed & Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.toFloat() > fixed2.toFloat())
		return (fixed1);
	return (fixed2);
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
