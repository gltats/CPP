#pragma once

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &copy);
        ~Intern();

        class UnknownFormException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        AForm *makeForm(std::string formName, std::string target);
};