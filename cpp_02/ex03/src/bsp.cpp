/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:24:09 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/15 19:18:45 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

float planeCheck(const Point &a, const Point &b, const Point &c)
{
    return ((a.getXFloat() - c.getXFloat()) * (b.getYFloat() - c.getYFloat())
            - (b.getXFloat() - c.getXFloat()) * (a.getYFloat() - c.getYFloat()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool checkA, checkB;

	checkA = planeCheck(point, a, b) > 0 || planeCheck(point, b, c) > 0 || planeCheck(point, c, a) > 0;
	checkB = planeCheck(point, a, b) < 0 || planeCheck(point, b, c) < 0 || planeCheck(point, c, a) < 0;

	std::cout << a.getXFloat() << "," << a.getYFloat()
	          << " " << b.getXFloat() << "," << b.getYFloat()
	          << " " << c.getXFloat() << "," << c.getYFloat() << std::endl;
	std::cout << checkA << " " << checkB << std::endl;

	return !(checkA && checkB);
}
