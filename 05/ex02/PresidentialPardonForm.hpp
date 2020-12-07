/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:53:13 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/06 23:05:16 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include <fstream>

class PresidentialPardonForm : public Form
{
	private:
	PresidentialPardonForm();
	public:
	PresidentialPardonForm(std::string const &newTarget);
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &presidentialPardonForm);
	virtual ~PresidentialPardonForm();
	void execute(Bureaucrat const &executor) const;
};
	std::ostream &operator<<(std::ostream &os, PresidentialPardonForm const &form);

#endif