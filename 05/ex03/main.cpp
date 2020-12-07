/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:31:30 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/07 10:41:07 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern intern = Intern();
		Form *form1 = intern.makeRobotomy("target");
		Bureaucrat bur1 = Bureaucrat("Вася", 145);
		std::cout << *form1 << std::endl;
		bur1.signForm(*form1);
		std::cout << *form1 << std::endl;
		bur1.executeForm(*form1);
	}
	catch(Form::GradeTooHighException){}
	catch(Form::GradeTooLowException){}
	catch(Form::FormIsNotSigned){}
	catch(Bureaucrat::GradeTooHighException){}
	catch(Bureaucrat::GradeTooLowException){}
	catch(RobotomyRequestForm::RoboFail){}
	return (0);
}