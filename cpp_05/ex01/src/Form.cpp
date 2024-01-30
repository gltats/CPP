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
Form::Form(): _name("form"), _signed(false), _gradeToSign(1), _gradeToExecute(1)
{
    std::cout << "Default " << this->_name << " appeared" << std::endl;
}

//Constructor
Form::Form(std::string name, int gradeToSign, int gradeToExecute): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << this->_name << " constructor" << std::endl;
    if(_gradeToSign < 1 || _gradeToExecute < 1)
        throw GradeTooHighException();
    else if(_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
}

// Copy constructor
Form::Form(const Form &copy): _name(copy.getName()), _signed(copy.getSigned()), _gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute())
{
    *this = copy;
    return ;
}

// Copy assignment overload
Form &Form::operator=(const Form &copy) {
    if (this != &copy)
        this->_signed = copy.getSigned();
    return *this;
}

// Default destructor
Form::~Form() 
{
    std::cout << this->_name << " says bye" << std::endl;
}

const std::string Form::getName() const
{
    return this->_name;
}

bool Form::getSigned() const
{
    return this->_signed;
}

int Form::getGradeToSign() const
{
    return this->_gradeToSign;
}

int Form::getGradeToExecute() const
{
    return this->_gradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (_signed)
    {
            std::cout << this->_name << " is already signed" << std::endl;
    }
    else if(bureaucrat.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    else
    {
        this->_signed = true;
        std::cout << this->_name << " was signed by " << bureaucrat.getName() << std::endl;     
    }
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "Form cannot be signed. Grade is to high! Can only be between 1(heighest) and 150(lowest)";
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "Form cannot be signed. Grade is to low! Can only be between 1(heighest) and 150(lowest)";
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << "Form name is: " << form.getName() << ", Grade to Execute: " << form.getGradeToExecute() 
    << ", Grade to Sign: " << form.getGradeToSign() <<  ", Signed status: " << form.getSigned() << std::endl;
	return os;
}

