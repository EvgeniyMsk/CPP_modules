/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:53:17 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/07 10:19:43 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	Form("default", 0, 0, "dafault") 
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &newTarget) :
	Form("RobotomyRequestForm", 72, 45, newTarget) 
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) :
	Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute(), copy.getTarget())
{
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &robotomyRequestForm)
{
	(void)robotomyRequestForm;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{	
	int i = 0;
	srand(time(0) + this->getName().size());
	Form::execute(executor);
	while (i < 100)
	{
		if (i > rand() % 100 && rand() % 100 < 50)
			throw std::string("robotomized fail");
		std::cout << i << "%: vzh vzh vzh vzh vzh vzh vzh vzh..." << std::endl;
		if (i >= 50)
			break;
		i += 10;
	}
	std::cout << Form::getTarget() << "  has been robotomized successfully!"
									<< std::endl;
}

std::ostream &operator<<(std::ostream &os, RobotomyRequestForm const &form)
{
	os << "Name: " << form.getName() << std::endl 
	<< "Is signed: " << form.getIsSigned() << std::endl 
	<< "Grade to sign: " << form.getGradeToSign() << std::endl
	<< "Grade to execute: " << form.getGradeToExecute() << std::endl
	<< "Target: " << form.getTarget();
	return (os);
}