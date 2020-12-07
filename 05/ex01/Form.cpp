/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:52:47 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/07 19:14:34 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
	name("default"), gradeToSign(0), gradeToExecute(0)
{
}

Form::Form(std::string const &newName, int newGradeToSign, int newGradeToExecute) :
	name(newName), gradeToSign(newGradeToSign), gradeToExecute(newGradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::OtherException("Уровень документа некорректен!");
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::OtherException("Уровень документа некорректен!");
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
		throw GradeTooLowException();
	else 
	{
		isSigned = true;
		std::cout << bureaucrat.getName() + " подписывает документ " + name << std::endl;
	}	
}

void Form::execute(Bureaucrat const &executor) const
{
	if (!isSigned)
		throw Form::OtherException("Документ еще не подписан!");
	else if (gradeToExecute < executor.getGrade())
		throw GradeTooLowException();
	else 
		std::cout << executor.getName() + " исполняет документ " + name << std::endl;
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
os << "Name: " << form.getName() << std::endl 
	<< "Is signed: " << form.getIsSigned() << std::endl 
	<< "Grade to sign: " << form.getGradeToSign() << std::endl
	<< "Grade to execute: " << form.getGradeToExecute();
	return (os);
}

Form::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Уровень бюрократа слишком низкий для подписания/исполнения!" << std::endl;
}

Form::OtherException::OtherException(std::string const &reason)
{
	std::cout << reason << std::endl;
}