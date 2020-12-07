/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:52:52 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/07 19:14:40 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	std::string const name;
	bool isSigned;
	int	const gradeToSign;
	int const gradeToExecute;
	Form();
public:
	Form(std::string const &newName, int newGradeToSign, int newGradeToExecute);
	Form(Form const &copy);
	Form &operator=(Form const &form);
	virtual ~Form();
	std::string const &getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(Bureaucrat const &bureaucrat);
	virtual void execute(Bureaucrat const &executor) const;
	class GradeTooLowException : public std::exception { public: GradeTooLowException(); };
	class OtherException : public std::exception { public: OtherException(std::string const &reason); };
};
	std::ostream &operator<<(std::ostream &os, Form const &form);

#endif