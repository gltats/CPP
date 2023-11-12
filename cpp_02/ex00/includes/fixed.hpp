/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:19:02 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/12 17:06:17 by tgomes-l         ###   ########.fr       */
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
		Fixed(Fixed &fixed);//copy constructor
		Fixed &operator=(Fixed &fixed);//assigment operator overload
		~Fixed();
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
