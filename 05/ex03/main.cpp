/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:31:30 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/07 19:17:17 by qsymond          ###   ########.fr       */
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
		Form *form1 = intern.makeForm("RobotomyRequestForm", "Bart");
		Bureaucrat bur1 = Bureaucrat("Вася", 3);
		bur1.signForm(*form1);
		bur1.executeForm(*form1);
	}
	catch (std::exception & e) {
	}
	return (0);
}