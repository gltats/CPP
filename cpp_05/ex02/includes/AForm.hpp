#pragma once

#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;

class AForm {
	protected:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;

	public:
		//Canonical AForm
		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &copy);
		AForm &operator=(const AForm &copy);
		virtual ~AForm();

		//Mandatory part
		const std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(Bureaucrat &bureaucrat);
        virtual void execute(Bureaucrat const &executor) const = 0;//the class must be abstract

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
        class FormNotSignedException: public std::exception //inherit exception
        {
            public:
                virtual const char *what() const throw();
        };
        class FormAlreadySignedException: public std::exception //inherit exception
        {
            public:
                virtual const char *what() const throw();
        };
};      

std::ostream &operator<<(std::ostream &os, AForm const &Aform);