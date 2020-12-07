/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:53:25 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/07 10:39:21 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
	RobotomyRequestForm();
	public:
	RobotomyRequestForm(std::string const &newTarget);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &shrubberyCreationForm);
	virtual ~RobotomyRequestForm();
	void execute(Bureaucrat const &executor) const;
	class RoboFail : public std::exception {};
};
	std::ostream &operator<<(std::ostream &os, RobotomyRequestForm const &form);

#endif