/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:31:30 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/07 13:21:01 by qsymond          ###   ########.fr       */
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
	catch (std::exception & e) {
	}

	try
	{
		Bureaucrat bureaucratHigh = Bureaucrat("Jim1", 0);
		std::cout << bureaucratHigh;
	}
	catch (std::exception & e) {
	}

	try
	{
		Bureaucrat bureaucratmed1 = Bureaucrat("Jim1", 150);
		bureaucratmed1.decGrade();
		std::cout << bureaucratmed1;
	}
	catch (std::exception & e) {
	}

	try
	{
		Bureaucrat bureaucratmed2 = Bureaucrat("Jim1", 1);
		bureaucratmed2.incGrade();
		std::cout << bureaucratmed2;
	}
	catch (std::exception & e) {
	}

	try
	{
		Bureaucrat bureaucratmed3 = Bureaucrat("Jim1", 100);
		bureaucratmed3.incGrade();
		std::cout << bureaucratmed3;
	}
	catch (std::exception & e) {
	}
	return (0);
}