/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:22:05 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 17:10:29 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();

	delete dog;
	delete cat;
	delete meta;

	const WrongAnimal* fakecritter = new WrongAnimal();
	const WrongAnimal* fakeKitty = new WrongCat();
	
	std::cout << fakecritter->getType() << " " << std::endl;
	std::cout << fakeKitty->getType() << " " << std::endl;

	fakeKitty->makeSound();
	fakecritter->makeSound();

	delete fakecritter;
	delete fakeKitty;

	return 0;
}
