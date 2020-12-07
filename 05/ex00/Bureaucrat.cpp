/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:31:39 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/07 13:21:07 by qsymond          ###   ########.fr       */
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
		{
			std::cout << "Уровень бюроктара слишком высокий!" << std::endl;
			throw GradeTooHighException();
		}
	else if (newGrade > 150)
		{
			std::cout << "Уровень бюроктара слишком низкий!" << std::endl;
			throw GradeTooLowException();
		}
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
	{
		std::cout << "Уровень бюроктара слишком высокий!" << std::endl;
		throw GradeTooHighException();
	}
	else
		grade--;
}

void Bureaucrat::decGrade()
{
	if (grade + 1 > 150)
	{
		std::cout << "Уровень бюроктара слишком низкий!" << std::endl;
		throw GradeTooLowException();
	}
	else
		grade++;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << "Name: " + bureaucrat.getName() + " Grade: " << bureaucrat.getGrade() << std::endl;
	return (os);
}