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
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void test(void)
{
		Bureaucrat Boss("The Boss", 1);
		std::cout << Boss;

		std::cout << "\n____________test 1:____________" << std::endl;
		try {
			ShrubberyCreationForm form1("Garden");
			std::cout << form1;
			Boss.signForm(form1);
			std::cout << form1;
			Boss.executeForm(form1);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "____________________________________" << std::endl;
		std::cout << "Note: ShrubberyCreationForm tested" << std::endl;

		std::cout << "\n____________test 2:____________" << std::endl;
		try {
			RobotomyRequestForm form2("Robot");
			std::cout << form2;
			Boss.signForm(form2);
			std::cout << form2;
			Boss.executeForm(form2);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "____________________________________" << std::endl;
		std::cout << "Note: RobotomyRequestForm tested" << std::endl;

		std::cout << "\n____________test 3:____________" << std::endl;
		try {
			PresidentialPardonForm form3("President");
			std::cout << form3;
			Boss.signForm(form3);
			std::cout << form3;
			Boss.executeForm(form3);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "____________________________________" << std::endl;
		std::cout << "Note: PresidentialPardonForm tested" << std::endl;
}

int main(void)
{
	test();

	return (0);
}
