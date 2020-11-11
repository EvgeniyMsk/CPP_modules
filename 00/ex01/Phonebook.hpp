/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:32:30 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/10 16:51:19 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include "Person.hpp"

class Phonebook
{
	private:
	int			amount;
	Person		persons[8];

	public:
	Phonebook();
	~Phonebook();
	void		initialize(void);
	void		addPerson(void);
	void		searchPerson(void);
	void		showSearchHeader(void);
};

#endif