/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:31:30 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/07 19:15:43 by qsymond          ###   ########.fr       */
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
		RobotomyRequestForm form1 = RobotomyRequestForm("target");
		Bureaucrat bur1 = Bureaucrat("Вася", 149);
		std::cout << form1 << std::endl;
		bur1.signForm(form1);
		std::cout << form1 << std::endl;
		bur1.executeForm(form1);
	}
	catch (std::exception & e) {
	}
	return (0);
}