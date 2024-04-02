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
#include "AForm.hpp" 

class AForm; // Forward declaration

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
		void signForm(AForm& aform);
		void executeForm(AForm const &aform);

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

	private:
		const std::string _name;
		int _grade;


};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);
