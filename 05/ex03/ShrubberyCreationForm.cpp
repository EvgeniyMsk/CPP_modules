/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:53:31 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/07 10:19:30 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("default", 0, 0, "default") 
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &newTarget) :
	Form("ShrubberyCreationForm", 145, 137, newTarget) 
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) :
	Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute(), copy.getTarget())
{
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shrubberyCreationForm)
{
	(void)shrubberyCreationForm;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream fs;
	fs.open(this->getTarget()+ "_shrubbery");
	fs << "  *  " << std::endl;
	fs << " *** " << std::endl;
	fs << "*****";
	fs.close();
}

std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm const &form)
{
	os << "Name: " << form.getName() << std::endl 
	<< "Is signed: " << form.getIsSigned() << std::endl 
	<< "Grade to sign: " << form.getGradeToSign() << std::endl
	<< "Grade to execute: " << form.getGradeToExecute() << std::endl
	<< "Target: " << form.getTarget();
	return (os);
}