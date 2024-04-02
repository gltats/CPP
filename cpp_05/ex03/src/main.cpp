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
#include "Intern.hpp"

void test(void)
{
	Bureaucrat Boss("The Boss", 1);
	std::cout << Boss;

	Intern someRandomIntern;
	AForm *Form;

	std::cout << "\n____________test 1:____________" << std::endl;
	try
	{
		Form = someRandomIntern.makeForm("ShrubberyCreationForm", "home");
		std::cout << *Form;
		Boss.signForm(*Form);
		std::cout << *Form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete Form;
	Form = nullptr;

	std::cout << "____________________________________" << std::endl;
	std::cout << "Note: ShrubberyCreationForm test" << std::endl;

	std::cout << "\n____________test 2:____________" << std::endl;
	try
	{
		Form = someRandomIntern.makeForm("RobotomyRequestForm", "john");
		std::cout << *Form;
		Boss.signForm(*Form);
		std::cout << *Form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete Form;
	Form = nullptr;

	std::cout << "____________________________________" << std::endl;
	std::cout << "Note: RobotomyRequestForm test" << std::endl;

	std::cout << "\n____________test 3:____________" << std::endl;
	try
	{
		Form = someRandomIntern.makeForm("PresidentialPardonForm", "you");
		std::cout << *Form;
		Boss.signForm(*Form);
		std::cout << *Form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete Form;
	Form = nullptr;
	
	std::cout << "____________________________________" << std::endl;
	std::cout << "Note: PresidentialPardonForm test" << std::endl;

	std::cout << "\n____________test 4:____________" << std::endl;
	try
	{
		Form = someRandomIntern.makeForm("NonExistentForm", "target");
		if (Form)
		{
			std::cout << *Form;
			Boss.signForm(*Form);
			std::cout << *Form;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	if (Form)
	{
		delete Form;
		Form = nullptr;
	}
	std::cout << "____________________________________" << std::endl;
	std::cout << "Note: NonExistentForm test" << std::endl;
}

int main(void)
{
	test();

	return (0);
}
