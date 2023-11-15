/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:23:30 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/15 19:26:07 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

int main() {
	Point a(0, 0);
	Point b(1, 0);
	Point c(0, 1);
	Point testPoint(0.5, 0.5);

	Point a2(50, 0);
	Point b2(24, 5);
	Point c2(52, 40);
	Point testPoint2(90, 70);
	
	bool result = bsp(a, b, c, testPoint);
	std::cout << "Result: " << (result ? "Inside" : "Outside") << std::endl;
	std::cout << std::endl;
	bool result2 = bsp(a2, b2, c2, testPoint2);
	std::cout << "Result: " << (result2 ? "Inside" : "Outside") << std::endl;
	
	return 0;
}
