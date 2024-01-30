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
#include "Form.hpp"


void test(void)
{
	Bureaucrat Boss("The Boss", 1);
	std::cout << Boss;

	std::cout << "\n____________test 1:____________" << std::endl;
	try {
		Form Form1("Lola", 8, 1);
		std::cout << Form1;
		Boss.signForm(Form1);
		Boss.signForm(Form1);
	}
	catch (std::exception &e) 
	{
		std::cout << e.what()  << std::endl;
	}
	std::cout << "____________________________________" << std::endl;
	std::cout << "Note: can be signed" << std::endl;


	std::cout << "\n____________test 2:____________" << std::endl;
	try {

		Form Form2("Pepa", 160, 110);
		std::cout << Form2;
		Boss.signForm(Form2);
	}
	catch (std::exception &e) 
	{
		std::cout << e.what()  << std::endl;
	}
	std::cout << "____________________________________" << std::endl;
	std::cout << "Note: can noy be signed, to low" << std::endl;


	std::cout << "\n____________test 3:____________" << std::endl;
	try {
		Form Form3("Mateo", 0, 50);
		std::cout << Form3;
		Boss.signForm(Form3);
	}
	catch (std::exception &e) 
	{
		std::cout << e.what()  << std::endl;
	}
	std::cout << "____________________________________" << std::endl;
	std::cout << "Note: can not be signed too high" << std::endl;

	std::cout << "\n____________test 4:____________" << std::endl;
	try {
		Form Form4("Octavio",  0177, 0177);  // Octal literal 127, 127
		// Form Form4("Octavio",  03245, 03245);  // Octal literal 1725, 1725
		std::cout << Form4;
		Boss.signForm(Form4);

	}
	catch (std::exception &e) 
	{
		std::cout << e.what()  << std::endl;
	}
	std::cout << "____________________________________" << std::endl;
	std::cout << "Note: can be signed, Octal literal is 127" << std::endl;

	std::cout << "\n____________test 5:____________" << std::endl;
	try {
		Form Form5("Marcelo", '@', '@'); // Character literal  64, 64
		//Form Form5("Marcelo", 'Z' + 'Z', 'Z'); // Character literal  180, 90
		std::cout << Form5;
		Boss.signForm(Form5);
		// Boss.signForm(Form5);
	}
	catch (std::exception &e) 
	{
		std::cout << e.what()  << std::endl;
	}
	std::cout << "____________________________________" << std::endl;
	std::cout << "Note: can be signed, is Character literal 64" << std::endl;

	std::cout << "\n____________test 6:____________" << std::endl;
	try {
		Form Form6("Luciana", 0x3b24, 0XF96); // Hexadecimal literal 15140, 3990
		// Form Form6("Luciana", 0xA, 0xB); // Hexadecimal literal 10, 11
		std::cout << Form6;
		Boss.signForm(Form6);
	}
	catch (std::exception &e) 
	{
		std::cout << e.what()  << std::endl;
	}
	std::cout << "Note: can not be signed, Hexadecimal literal is 15140, 3990" << std::endl;
}

int main(void)
{
	test();

	return (0);
}
