/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:52:47 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/07 10:19:52 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
	name("default"), gradeToSign(0), gradeToExecute(0), target("default")
{
}

Form::Form(std::string const &newName, int newGradeToSign, int newGradeToExecute, std::string const &newTarget) :
	name(newName), gradeToSign(newGradeToSign), gradeToExecute(newGradeToExecute), target(newTarget)
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

void Form::beSigned(Bureaucrat const &bureaucrat)
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

void Form::execute(Bureaucrat const &executor) const
{
	if (!isSigned)
	{
		std::cout << "Документ еще не подписан!" << std::endl;
		throw FormIsNotSigned();
	}
	else if (gradeToExecute < executor.getGrade())
	{
		std::cout << executor.getName() + " не может исполнить документ " + name + " потому, что имеет низкий рейтинг!"<< std::endl;
		throw GradeTooLowException();
	}
	else 
	{
		std::cout << executor.getName() + " исполняет документ " + name << std::endl;
	}	
}

std::string const &Form::getTarget() const
{
	return (target);
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << "Name: " << form.getName() << std::endl 
	<< "Is signed: " << form.getIsSigned() << std::endl 
	<< "Grade to sign: " << form.getGradeToSign() << std::endl
	<< "Grade to execute: " << form.getGradeToExecute() << std::endl
	<< "Target: " << form.getTarget();
	return (os);
}