/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:31:30 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/06 14:47:39 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Form form = Form("Форма_1", 10, 10);
		Bureaucrat bureaucrat = Bureaucrat("Вася", 100);
		std::cout << form << std::endl;
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch(Form::GradeTooHighException)
	{
		
	}
	catch(Form::GradeTooLowException)
	{
		
	}
	catch(Bureaucrat::GradeTooHighException)
	{
		
	}
	catch(Bureaucrat::GradeTooLowException)
	{
		
	}
	return (0);
}