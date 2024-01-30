/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:48:24 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/22 12:19:13 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp" 

class Form; // Forward declaration

class Bureaucrat {
	public:
		//Canonical Form
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &copy);
		~Bureaucrat();

		//Mandatory part
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(Form& form);

	private:
		const std::string _name;
		int _grade;
		//nested Grade exception
		class GradeTooHighException: public std::exception //inherit exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException: public std::exception //inherit exception
		{
			public:
				virtual const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);
