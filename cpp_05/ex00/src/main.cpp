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


void test(void)
{
	std::cout << "\n____________test 1: John____________" << std::endl;
	
	try {
		Bureaucrat bureaucrat("John", 50);
		std::cout << bureaucrat;

		bureaucrat.incrementGrade();
		std::cout << bureaucrat;

		bureaucrat.decrementGrade();
		std::cout << bureaucrat;
		
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << "____________________________________" << std::endl;
	std::cout << "Note: Should not be exceptions, result is 50,49,50" << std::endl;


	std::cout << "\n____________test 2: Matilde____________" << std::endl;
	try {
		Bureaucrat bureaucrat("Matilde", 150);
		std::cout << bureaucrat;

		bureaucrat.decrementGrade();
		std::cout << bureaucrat;

		bureaucrat.incrementGrade();
		std::cout << bureaucrat;
		
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << "____________________________________" << std::endl;
	std::cout << "Note: Should be exception, result is Grade too low" << std::endl;

	std::cout << "\n____________test 2: Samuel____________" << std::endl;
	try {
		Bureaucrat bureaucrat("Samuel", 1);
		std::cout << bureaucrat;

		bureaucrat.incrementGrade();
		std::cout << bureaucrat;

		bureaucrat.decrementGrade();
		std::cout << bureaucrat;
		
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << "____________________________________" << std::endl;
	std::cout << "Note: Should be exception, result is Grade too high" << std::endl;


    std::cout << "\n____________test 4: Maria____________" << std::endl;
    try {
        Bureaucrat bureaucrat("Maria", 1);
        std::cout << bureaucrat;

        for (int i = 150; i > 0; i--) {
            try {
                bureaucrat.decrementGrade();
                std::cout << bureaucrat;
            } catch (const std::exception& e) {
                std::cerr << "Exception: " << e.what() << std::endl;
                break; // Exit the loop when an exception occurs
            }
        }
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	std::cout << "____________________________________" << std::endl;
	std::cout << "Note: Should Exit the loop when an exception occurs, low to high" << std::endl;

	std::cout << "\n____________test 5: Anna____________" << std::endl;
    try {
        Bureaucrat bureaucrat("Anna", 140);
        std::cout << bureaucrat;

        for (int i = 2; i < 200; i++) {
            try {
                bureaucrat.incrementGrade();
                std::cout << bureaucrat;
            } catch (const std::exception& e) {
                std::cerr << "Exception: " << e.what() << std::endl;
                break; // Exit the loop when an exception occurs
            }
        }

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	std::cout << "____________________________________" << std::endl;
	std::cout << "Note: Should Exit the loop when an exception occurs, high to low" << std::endl;

}

int main(void)
{
	test();
	return 0;
}
