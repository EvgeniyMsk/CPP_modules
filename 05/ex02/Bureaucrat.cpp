/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:31:39 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/07 19:12:21 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string const &newName, int newGrade) :
	name(newName)
{
	if (newGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (newGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade = newGrade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
	grade = bureaucrat.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string const &Bureaucrat::getName() const
{
	return (name);
}

int	Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::incGrade()
{
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade--;
}

void Bureaucrat::decGrade()
{
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade++;
}

void Bureaucrat::signForm(Form &form)
{
	if (&form != nullptr)
		form.beSigned(*this);
	else
		throw Bureaucrat::OtherException("Попытка обработать несуществующую форму!");
}

void Bureaucrat::executeForm(Form const &form)
{
	if (&form != nullptr)
		form.execute(*this);
	else
		throw Bureaucrat::OtherException("Попытка обработать несуществующую форму!");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << "Name: " + bureaucrat.getName() + " Grade: " << bureaucrat.getGrade();
	return (os);
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Уровень бюрократа будет слишком высоким!" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Уровень бюрократа будет слишком низким!" << std::endl;
}

Bureaucrat::OtherException::OtherException(std::string const &reason)
{
	std::cout << reason << std::endl;
}