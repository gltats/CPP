/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:32:28 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/11 18:28:00 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./harl.hpp"

int main(void)
{
	Harl Harl;
	
	std::cout << BLUE << " ____ ____ ____ ____ ____ _________ ____ ____ ____ ____ ____ ____ ____ " << RESET << std::endl;
	std::cout << BLUE << "||d |||e |||b |||u |||g |||       |||m |||e |||s |||s |||a |||g |||e ||" << RESET << std::endl;
	std::cout << BLUE << "||__|||__|||__|||__|||__|||_______|||__|||__|||__|||__|||__|||__|||__||" << RESET << std::endl;
	std::cout << BLUE << "|/__'|/__'|/__'|/__'|/__'|/_______'|/__'|/__'|/__'|/__'|/__'|/__'|/__'|" << RESET << std::endl;
	Harl.complain("DEBUG");
	
	std::cout << GREEN << " ____ ____ ____ ____ _________ ____ ____ ____ ____ ____ ____ ____ " << RESET << std::endl;
	std::cout << GREEN << "||i |||n |||f |||o |||       |||m |||e |||s |||s |||a |||g |||e ||" << RESET << std::endl;
	std::cout << GREEN << "||__|||__|||__|||__|||_______|||__|||__|||__|||__|||__|||__|||__||" << RESET << std::endl;
	std::cout << GREEN << "|/__'|/__'|/__'|/__'|/_______'|/__'|/__'|/__'|/__'|/__'|/__'|/__'|" << RESET << std::endl;
	Harl.complain("INFO");

	std::cout << YELLOW << " ____ ____ ____ ____ ____ ____ ____ _________ ____ ____ ____ ____ ____ ____ ____ " << RESET << std::endl;
	std::cout << YELLOW << "||w |||a |||r |||n |||i |||n |||g |||       |||m |||e |||s |||s |||a |||g |||e ||" << RESET << std::endl;
	std::cout << YELLOW << "||__|||__|||__|||__|||__|||__|||__|||_______|||__|||__|||__|||__|||__|||__|||__||" << RESET << std::endl;
	std::cout << YELLOW << "|/__'|/__'|/__'|/__'|/__'|/__'|/__'|/_______'|/__'|/__'|/__'|/__'|/__'|/__'|/__'|" << RESET << std::endl;
	Harl.complain("WARNING");

	std::cout << RED << " ____ ____ ____ ____ ____ _________ ____ ____ ____ ____ ____ ____ ____ " << RESET << std::endl;
	std::cout << RED << "||e |||r |||r |||o |||r |||       |||m |||e |||s |||s |||a |||g |||e ||" << RESET << std::endl;
	std::cout << RED << "||__|||__|||__|||__|||__|||_______|||__|||__|||__|||__|||__|||__|||__||" << RESET << std::endl;
	std::cout << RED << "|/__'|/__'|/__'|/__'|/__'|/_______'|/__'|/__'|/__'|/__'|/__'|/__'|/__'|" << RESET << std::endl;
	Harl.complain("ERROR");
}