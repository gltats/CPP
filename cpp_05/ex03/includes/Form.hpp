/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:53:49 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/22 13:12:54 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;

class Form {
	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;
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
	public:
		//Canonical Form
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &copy);
		Form &operator=(const Form &copy);
		~Form();

		//Mandatory part
		const std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, Form const &form);