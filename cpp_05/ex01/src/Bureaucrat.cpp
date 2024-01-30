/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:47:52 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/22 12:56:23 by tgomes-l         ###   ########.fr       */
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
		throw GradeTooHighException();
	else if(_grade > 150)
		throw GradeTooLowException();
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy.getName()), _grade(copy.getGrade())
{
	std::cout << this->_name << " copy constructor" << std::endl;
	*this = copy;
}

// Copy assignment overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
	if (this != &copy)
		this->_grade = copy.getGrade();
	
	std::cout << this->_name << "Operator overload" << std::endl;
	return *this;
}

// Default destructor
Bureaucrat::~Bureaucrat() 
{
	std::cout << this->_name << " says bye" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

//as per the subject grade that ranges from 1 (highest possible grade) to 150 (lowest possible
//grade) 
void Bureaucrat::incrementGrade()
{
	if(this->_grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if(this->_grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is to high! Can only be between 1(heighest) and 150(lowest)";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is to low! Can only be between 1(heighest) and 150(lowest)";
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << "Bureaucrat name is: " << bureaucrat.getName() << ", Grade is: " << bureaucrat.getGrade() << std::endl;
	return os;
}

void Bureaucrat::signForm(Form& form)
{
	form.beSigned(*this);
	if (form.getSigned() == false)
		std::cout << this->_name << " couldnt sign '" << form.getName()<<"'"<< std::endl;
}