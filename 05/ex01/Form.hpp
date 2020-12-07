#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
private:
	std::string const name;
	bool isSigned;
	int	const gradeToSign;
	int const gradeToExecute;
	Form();
public:

	Form(std::string const &newName, int newGradeToSign, int newGradeToExecute);
	Form(Form const &copy);
	Form &operator=(Form const &form);
	virtual ~Form();
	class GradeTooHighException : public std::exception {};
	class GradeTooLowException : public std::exception {};
	std::string const &getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(Bureaucrat &bureaucrat);
};
std::ostream &operator<<(std::ostream &os, Form const &form);

#endif