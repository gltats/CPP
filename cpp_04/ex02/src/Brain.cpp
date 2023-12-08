/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:21:38 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 20:10:10 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain Copy-Constructor" << std::endl;
	if (this == &src)
		return;
	copyIdeas(src);
}

Brain& Brain::operator=(const Brain &src) //deep copy
{
	std::cout << "Brain copy assignment Operator called" << std::endl;
	if (this == &src)
		return *this;
	copyIdeas(src);
	return *this;
}


Brain::~Brain()
{
	std::cout << "Last neuron also says bye" << std::endl;
}

const std::string Brain::getIdea(int index) const
{
	if (index >= 100 || index < 0)
		return ("Invalid index. A Brain has from 0 to 100 ideas");
	return (ideas[index]);
}

void Brain::setIdea(int index, const std::string idea)
{
    if (index >= 0 && index < 100) {
        ideas[index] = idea;
    }
	else
	  std::cout <<	"Invalid index." << std::endl;
}

size_t Brain::size( void )
{
    size_t i = 0;

    while (i < 100 && !ideas[i].empty()) {
        ++i;
    }
    return i;
}

void Brain::copyIdeas( const Brain &src )
{
	for (int i = 0; i < 100; i++)
		setIdea( i, src.getIdea(i));
}
