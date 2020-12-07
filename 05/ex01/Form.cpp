#include "Form.hpp"

Form::Form() :
	name("default"), gradeToSign(0), gradeToExecute(0)
{
}

Form::Form(std::string const &newName, int newGradeToSign, int newGradeToExecute) :
	name(newName), gradeToSign(newGradeToSign), gradeToExecute(newGradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	isSigned = false;
}

Form::Form(Form const &copy) :
	name(copy.name), gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute)
{
	*this = copy;
}

Form &Form::operator=(Form const &form)
{
	(void)form;
	return (*this);
}

Form::~Form()
{

}

std::string const &Form::getName() const 
{
	return (name);
}

bool Form::getIsSigned() const
{
	return (isSigned);
}

int Form::getGradeToSign() const
{
	return (gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (gradeToExecute);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (gradeToSign < bureaucrat.getGrade())
		{
			std::cout << bureaucrat.getName() + " не может подписать документ " + name + " потому, что имеет низкий рейтинг!"<< std::endl;
			throw GradeTooLowException();
		}
	else 
	{
		isSigned = true;
		std::cout << bureaucrat.getName() + " подписывает документ " + name << std::endl;
	}	
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << "Name: " << form.getName() << std::endl 
	<< "Is signed: " << form.getIsSigned() << std::endl 
	<< "Grade to sign: " << form.getGradeToSign() 
	<< std::endl << "Grade to execute: " << form.getGradeToExecute();
	return (os);
}