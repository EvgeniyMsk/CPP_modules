#include "Intern.hpp"

Intern::Intern(void) {
}

Intern::Intern(Intern const &intern) {
	*this = intern;
}

Intern &Intern::operator=(Intern const & intern) {
	(void)intern;
	return (*this);
}

Intern::~Intern(void) {
}

Form *Intern::makeForm(std::string type, std::string target) {
	std::string types[3] = {
		"PresidentialPardonForm",
		"RobotomyRequestForm",
		"ShrubberyCreationForm"
	};
	Form *(Intern::*func[])(std::string) =
		{
			&Intern::makePresidental,
			&Intern::makeRobotomy,
			&Intern::makeShrubbery
		};
	for (int i = 0; i < 3; i++)
		if (type == types[i])
			return(this->*func[i])(target);
	return (nullptr);
}

Form *Intern::makeShrubbery(std::string target) {
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeRobotomy(std::string target) {
	return (new RobotomyRequestForm(target));
}

Form *Intern::makePresidental(std::string target) {
	return (new PresidentialPardonForm(target));
}