/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:53:08 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/07 10:19:20 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	Form("default", 0, 0, "default") 
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &newTarget) :
	Form("PresidentialPardonForm", 25, 5, newTarget) 
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) :
	Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute(), copy.getTarget())
{
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &presidentialPardonForm)
{
	(void)presidentialPardonForm;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << Form::getTarget() << " has been pardoned by Zafod Beeblebrox."	<< std::endl;
}

std::ostream &operator<<(std::ostream &os, PresidentialPardonForm const &form)
{
	os << "Name: " << form.getName() << std::endl 
	<< "Is signed: " << form.getIsSigned() << std::endl 
	<< "Grade to sign: " << form.getGradeToSign() << std::endl
	<< "Grade to execute: " << form.getGradeToExecute() << std::endl
	<< "Target: " << form.getTarget();
	return (os);
}