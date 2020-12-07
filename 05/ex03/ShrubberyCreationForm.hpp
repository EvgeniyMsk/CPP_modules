/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:53:36 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/06 23:05:26 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
	ShrubberyCreationForm();
	public:
	ShrubberyCreationForm(std::string const &newTarget);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &shrubberyCreationForm);
	virtual ~ShrubberyCreationForm();
	void execute(Bureaucrat const &executor) const;
};
	std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm const &form);

#endif