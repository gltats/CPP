/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:24:27 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/15 19:18:57 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

class Fixed;

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const float x, const float y);
		Point(Point &p);
		Point &operator=(const Point &p);
		~Point();
	
		float getXFloat() const;
		float getYFloat() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
