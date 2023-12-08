/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:22:05 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 20:09:06 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\n ------ Test Polymorphism ------ " << std::endl;
	// Create an array of Animal objects
	Animal* animalCopies[4];
	for (int i = 0; i < 4; ++i)
	{
		if (i < (4 / 2))	// Dogs
			animalCopies[i] = new Dog();
		else		// Cats
			animalCopies[i] = new Cat();
	}
	for (int i = 0; i < 4; i++)
		delete animalCopies[i];
	

	std::cout << "\n ------ Test Deep Copies ------ " << std::endl;
	Dog Pluto;
	Pluto.setIdea( 0, "get a bone");
	Pluto.setIdea( 1, "eat a bone");
	Pluto.getIdea(0);
	Pluto.getIdea(1);
	Pluto.getIdea(2);
	Pluto.getIdea(100);
	
	Cat Figaro;
	Figaro.setIdea( 0, "want to play");
	Figaro.setIdea( 1, "chase a ball");
	Figaro.getIdea(0);
	Figaro.getIdea(1);
	Figaro.getIdea(2);
	Figaro.getIdea(100);

	///check the if its shallow or deep, by checking theirs addresses
	Dog PlutoJunior;
	PlutoJunior =  Pluto;
	Pluto.setIdea( 0, "get meat");
	Pluto.setIdea( 1, "eat meat");
	std::cout << "Pluto new Ideas:" << std::endl;
	Pluto.getIdea(0);
	Pluto.getIdea(1);
	std::cout << "Pluto Junior old ideas from Pluto:" << std::endl;
	PlutoJunior.getIdea(0);
	PlutoJunior.getIdea(1);

	std::cout << "\nAddresses:" << std::endl;
    std::cout << "Pluto address: " << &Pluto << std::endl;
    std::cout << "Pluto Junior address: " << &PlutoJunior << std::endl;

	Cat FigaroJunior;
	FigaroJunior =  Figaro;
	Figaro.setIdea( 0, "I'm bored");
	Figaro.setIdea( 1, "sleep");
	std::cout << "Figaro new Ideas:" << std::endl;
	Figaro.getIdea(0);
	Figaro.getIdea(1);
	std::cout << "Figaro Junior old ideas from Pluto:" << std::endl;
	FigaroJunior.getIdea(0);
	FigaroJunior.getIdea(1);

	std::cout << "\nAddresses:" << std::endl;
    std::cout << "Figaro address: " << &Pluto << std::endl;
    std::cout << "Figaro Junior address: " << &PlutoJunior << std::endl;

	return 0;
}
