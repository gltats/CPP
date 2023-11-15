/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:24:18 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/15 19:13:28 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

Point::Point() : x(0), y(0)
{}

Point::Point(const float x, const float y) : x(x), y(y)
{}

Point::Point(Point &p) :  x(p.x), y(p.y)
{}

Point &Point::operator = (const Point &p)
{
	if (this != &p)
		return (*this);
	return (*this);
}

Point::~Point()
{}

float Point::getXFloat() const
{
	return (this->x.toFloat());
}

float Point::getYFloat() const
{
	return (this->y.toFloat());
}
