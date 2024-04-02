#include "AForm.hpp"

// Default constructor
AForm::AForm() : _name("Aform"), _signed(false), _gradeToSign(1), _gradeToExecute(1)
{
    std::cout << "Default " << this->_name << " appeared" << std::endl;
}

// Constructor
AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << this->_name << " constructor" << std::endl;
    if (_gradeToSign < 1 || _gradeToExecute < 1)
        throw GradeTooHighException();
    else if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
}

// Copy constructor
AForm::AForm(const AForm &copy) : _name(copy.getName()), _signed(copy.getSigned()), _gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute())
{
    *this = copy;
    return;
}

// Copy assignment overload
AForm &AForm::operator=(const AForm &copy)
{
    if (this != &copy)
        this->_signed = copy.getSigned();
    return *this;
}

// Default destructor
AForm::~AForm()
{
    std::cout << this->_name << " says bye" << std::endl;
}

const std::string AForm::getName() const
{
    return this->_name;
}

bool AForm::getSigned() const
{
    return this->_signed;
}

int AForm::getGradeToSign() const
{
    return this->_gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return this->_gradeToExecute;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (_signed)
    {
        std::cout << this->_name << " is already signed" << std::endl;
    }
    else if (bureaucrat.getGrade() > this->_gradeToSign)
        throw AForm::GradeTooLowException();
    else
    {
        this->_signed = true;
    }
}

void AForm::execute(Bureaucrat const &executor) const
{
    if (!this->_signed)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->_gradeToExecute)
        throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "AForm cannot be signed. Grade is to high! Can only be between 1(heighest) and 150(lowest)";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "AForm cannot be signed. Grade is to low! Can only be between 1(heighest) and 150(lowest)";
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return "AForm cannot be executed. Form is not signed!";
}

std::ostream &operator<<(std::ostream &os, AForm const &Aform)
{
    os << "AForm name is: " << Aform.getName() << ", Grade to Execute: " << Aform.getGradeToExecute()
       << ", Grade to Sign: " << Aform.getGradeToSign() << ", Signed status: " << Aform.getSigned() << std::endl;
    return os;
}
