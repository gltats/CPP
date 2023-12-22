/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:53:47 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/22 13:11:36 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Default constructor
Form::Form() 
{
	std::cout << "Default form for:" << this->_name << " appeared" << std::endl;
}

//Constructor
Form::Form(bool signCheck, int signGrade, int executeGrad);
{

}

// Copy constructor
Form::Form(const Form &copy) 
{
  *this = other;
  return;
}

// Copy assignment overload
Form &Form::operator=(const Form &copy) {
  (void)copy;
  return *this;
}

// Default destructor
Form::~Form() 
{
	std::cout << this->_name << " says bye" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << "Form name is: " << form.getName() << std::endl;
	return os;
}
