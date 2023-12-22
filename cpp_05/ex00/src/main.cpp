/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:15:02 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/22 12:48:11 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "\n____________test 1: John____________" << std::endl;
	try {
		Bureaucrat bureaucrat("John", 50);
		std::cout << bureaucrat;

		bureaucrat.increment();
		std::cout << bureaucrat;

		bureaucrat.decrement();
		std::cout << bureaucrat;
		
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	std::cout << "\n____________test 2: Matilde____________" << std::endl;
	try {
		Bureaucrat bureaucrat("Matilde", 151);
		std::cout << bureaucrat;

		bureaucrat.increment();
		std::cout << bureaucrat;

		bureaucrat.decrement();
		std::cout << bureaucrat;
		
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n____________test 3: Jorge____________" << std::endl;
	try {
		Bureaucrat bureaucrat("Jorge", 0);
		std::cout << bureaucrat;

		bureaucrat.increment();
		std::cout << bureaucrat;

		bureaucrat.decrement();
		std::cout << bureaucrat;
		
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

    std::cout << "\n____________test 4: Maria____________" << std::endl;
    try {
        Bureaucrat bureaucrat("Maria", 140);
        std::cout << bureaucrat;

        for (int i = 2; i < 200; i++) {
            try {
                bureaucrat.increment();
                std::cout << bureaucrat;
            } catch (const std::exception& e) {
                std::cerr << "Exception: " << e.what() << std::endl;
                break; // Exit the loop when an exception occurs
            }
        }

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

	std::cout << "\n____________test 5: Anna____________" << std::endl;
    try {
        Bureaucrat bureaucrat("Anna", 140);
        std::cout << bureaucrat;

        for (int i = 2; i < 200; i++) {
            try {
                bureaucrat.increment();
                std::cout << bureaucrat;
            } catch (const std::exception& e) {
                std::cerr << "Exception: " << e.what() << std::endl;
                break; // Exit the loop when an exception occurs
            }
        }

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	
	return 0;
}
