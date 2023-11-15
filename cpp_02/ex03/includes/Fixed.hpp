/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:24:24 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/15 19:27:22 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int n;
		static const int c = 8;
	public:
		Fixed();
		Fixed(const Fixed &fixed);//copy constructor
		Fixed(const int i);
		Fixed(const float f);
		
		~Fixed();

		Fixed &operator = (const Fixed &fixed);//assigment operator overload
		bool operator > (const Fixed &fixed1);
		bool operator < (const Fixed &fixed1);
		bool operator >= (const Fixed &fixed1);
		bool operator <= (const Fixed &fixed1);
		bool operator == (const Fixed &fixed1);
		bool operator != (const Fixed &fixed1);
		
		float operator + (const Fixed &fixed1);
		float operator - (const Fixed &fixed1);
		float operator * (const Fixed &fixed1);
		float operator / (const Fixed &fixed1);

		float operator ++();
		float operator ++(int);

		static Fixed min (const Fixed &fixed1, const Fixed &fixed2);
		static Fixed max (const Fixed &fixed1, const Fixed &fixed2);
		static Fixed min (Fixed &fixed1, Fixed &fixed2);
		static Fixed max (Fixed &fixed1, Fixed &fixed2);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif
