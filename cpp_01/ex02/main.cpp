/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:07:25 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/09 18:18:47 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define GREEN "\033[0;32m"
#define PINK "\033[0;35m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"

int main(void)
{
	std::string message = "HI THIS IS BRAIN";
	std::string* thePointer = &message;
	std::string& theReference = message;
	
	std::cout << PINK << "This is the message: " << message << " and the address is: " << &message << RESET << std::endl;
	std::cout << BLUE << "This is the pointer value: " << thePointer << " and the address is: " << &thePointer << RESET << std::endl;
	std::cout << GREEN << "This is the reference value: " << theReference << " and the address is: " << &theReference << RESET << std::endl;
}
