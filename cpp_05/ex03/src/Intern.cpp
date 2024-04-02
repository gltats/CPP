#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
    (void)copy;
}

Intern &Intern::operator=(const Intern &copy)
{
    (void)copy;
    return *this;
}

Intern::~Intern()
{
}

const char *Intern::UnknownFormException::what() const throw()
{
    return "Invalid form name!";
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    AForm *form = nullptr;
    if (formName == "ShrubberyCreationForm")
    {
        form = new ShrubberyCreationForm(target);
        std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
    }
    else if (formName == "RobotomyRequestForm")
    {
        form = new RobotomyRequestForm(target);
        std::cout << "Intern creates RobotomyRequestForm" << std::endl;
    }
    else if (formName == "PresidentialPardonForm")
    {
        form = new PresidentialPardonForm(target);
        std::cout << "Intern creates PresidentialPardonForm" << std::endl;
    }
    else
    {
        throw Intern::UnknownFormException();
    }
    return form;
}