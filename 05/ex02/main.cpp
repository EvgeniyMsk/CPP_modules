/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:31:30 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/06 23:07:48 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		PresidentialPardonForm form1 = PresidentialPardonForm("target");
		Bureaucrat bur1 = Bureaucrat("Вася", 2);
		std::cout << form1 << std::endl;
		bur1.signForm(form1);
		std::cout << form1 << std::endl;
		bur1.executeForm(form1);
	}
	catch(Form::GradeTooHighException){}
	catch(Form::GradeTooLowException){}
	catch(Form::FormIsNotSigned){}
	catch(Bureaucrat::GradeTooHighException){}
	catch(Bureaucrat::GradeTooLowException){}
	return (0);
}