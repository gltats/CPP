/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:22:05 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 20:41:36 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{ 
	// Cannot instantiate directly
	//error: allocating an object of abstract class type 'Animal'
        //const Animal* meta = new Animal();
    	//                         ^
	//includes/Animal.hpp:32:16: note: unimplemented pure virtual method 'makeSound' in 'Animal'
	//virtual void makeSound()const = 0;
	
	//const Animal* meta = new Animal();
	// meta->makeSound();
	// delete meta;

	
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	
	dog->makeSound();
	cat->makeSound();


	delete dog;
	delete cat;

	return 0;
}
