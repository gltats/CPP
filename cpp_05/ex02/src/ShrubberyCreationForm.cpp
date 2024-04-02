#include "ShrubberyCreationForm.hpp"

// Default constructor
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
    std::cout << "Default ShrubberyCreationForm appeared" << std::endl;
}

// Constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm constructor" << std::endl;
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()), _target(copy._target)
{
    *this = copy;
    return;
}

// Copy assignment overload
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this != &copy)
        this->_target = copy._target;
    return *this;
}

// Default destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm says bye" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
            std::ofstream outfile;

            outfile.open((_target + "_shrubbery").c_str());
            if (outfile.is_open() && outfile.good())
            {
                outfile << "   *   \n";
                outfile << "  / \\ \n";
                outfile << " /   \\\n";
                outfile << "/     \\\n";
                outfile << "-------\n";
                outfile << "  | |   \n";
                outfile << std::endl;
            }
            outfile.close();
    std::cout << this->_target << " has been shrubberized successfully" << std::endl;
}