#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	public:
	Intern(void);
	Intern(Intern const & intern);
	Intern &operator=(Intern const & intern);
	virtual ~Intern(void);
	Form *makeForm(std::string type, std::string target);
	Form *makeShrubbery(std::string target);
	Form *makeRobotomy(std::string target);
	Form *makePresidental(std::string target);
};

#endif