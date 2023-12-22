/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:47:52 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/22 12:42:16 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Default constructor
Bureaucrat::Bureaucrat(): _name("bureaucrat"), _grade(1)
{
	std::cout << "Default " << this->_name << " appeared" << std::endl;
}

//Constructor
Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << this->_name << " constructor" << std::endl;
	if(_grade < 1)
		throw GradeTooLowException();
	else if(_grade > 150)
		throw GradeTooHighException();
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy.getName()), _grade(copy.getGrade())
{
	std::cout << this->_name << " copy constructor" << std::endl;
	*this = copy;
}

// Copy assignment overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
	if (this == &copy)
		return *this;
	this->_grade = copy.getGrade();
	std::cout << this->_name << " assignment constructor" << std::endl;
	return *this;
}

// Default destructor
Bureaucrat::~Bureaucrat() 
{
	std::cout << this->_name << " says bye" << std::endl;
}

const std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::decrement()
{
	if(this->_grade == 1)
		throw GradeTooLowException();
	else
		this->_grade--;
}

void Bureaucrat::increment()
{
	if(this->_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is to high! Can only be between 1 and 150";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is to low! Can only be between 1 and 150";
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << "Bureaucrat name is: " << bureaucrat.getName() << ", Grade is: " << bureaucrat.getGrade() << std::endl;
	return os;
}
