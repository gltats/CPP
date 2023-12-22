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

// Class declaration
class Form {
 public:
	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	}
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	}
	class : public std::exception
	{
		public:
			virtual const char *what() const throw();
	}
	Form();
	Form(bool signCheck, int signGrade, int executeGrad);
	Form(const Form &copy);
	Form &operator=(const Form &copy);
	~Form();
	const std::string getName() const;
	bool getSignCheck() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	
 private:
	const std::string _name;
	const int _signGrade;
	const int _executeGrade;
	bool _signCheck;
};

std::ostream &operator<<(std::ostream &os, Form const &form);

