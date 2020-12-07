/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:31:34 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/07 19:07:43 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
class Bureaucrat
{
private:
	std::string const name;
	int grade;
	Bureaucrat();
public:
	Bureaucrat(std::string const &newName, int newGrade);
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat &operator=(Bureaucrat const &bureaucrat);
	virtual ~Bureaucrat();
	std::string const &getName() const;
	int	getGrade() const;
	void incGrade();
	void decGrade();
	class GradeTooHighException : public std::exception { public: GradeTooHighException(); };
	class GradeTooLowException : public std::exception { public: GradeTooLowException(); };
	class OtherException : public std::exception { public: OtherException(std::string const &reason); };
};
std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif