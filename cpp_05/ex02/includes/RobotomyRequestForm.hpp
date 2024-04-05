#pragma once
#include <cstdlib>
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public:
        //Canonical Form
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
        ~RobotomyRequestForm();

        //Mandatory part
        void execute(Bureaucrat const &executor) const;
        
    private:
        std::string _target;
        //nested Grade exception
		class UnknownFormException: public std::exception //inherit exception
		{
			public:
				virtual const char *what() const throw();
		};
};