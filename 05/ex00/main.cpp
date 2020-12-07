/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:31:30 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/06 12:46:05 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat bureaucratLow = Bureaucrat("Jim", 200);
		std::cout << bureaucratLow;
	}
	catch(Bureaucrat::GradeTooLowException)
	{
		std::cout << "Слишком низкий рейтинг!" << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException)
	{
		std::cout << "Слишком высокий рейтинг!" << std::endl;
	}

	try
	{
		Bureaucrat bureaucratHigh = Bureaucrat("Jim1", 0);
		std::cout << bureaucratHigh;
	}
	catch(Bureaucrat::GradeTooLowException)
	{
		std::cout << "Слишком низкий рейтинг!" << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException)
	{
		std::cout << "Слишком высокий рейтинг!" << std::endl;
	}

	try
	{
		Bureaucrat bureaucratmed1 = Bureaucrat("Jim1", 150);
		bureaucratmed1.decGrade();
		std::cout << bureaucratmed1;
	}
	catch(Bureaucrat::GradeTooLowException)
	{
		std::cout << "Слишком низкий рейтинг!" << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException)
	{
		std::cout << "Слишком высокий рейтинг!" << std::endl;
	}

	try
	{
		Bureaucrat bureaucratmed2 = Bureaucrat("Jim1", 1);
		bureaucratmed2.incGrade();
		std::cout << bureaucratmed2;
	}
	catch(Bureaucrat::GradeTooLowException)
	{
		std::cout << "Слишком низкий рейтинг!" << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException)
	{
		std::cout << "Слишком высокий рейтинг!" << std::endl;
	}

	try
	{
		Bureaucrat bureaucratmed3 = Bureaucrat("Jim1", 100);
		bureaucratmed3.incGrade();
		std::cout << bureaucratmed3;
	}
	catch(Bureaucrat::GradeTooLowException)
	{
		std::cout << "Слишком низкий рейтинг!" << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException)
	{
		std::cout << "Слишком высокий рейтинг!" << std::endl;
	}

	return (0);
}