/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:05:20 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/26 13:14:58 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>
#include <string>

class Victim
{
protected:
	std::string	name;
	Victim();
public:
	Victim(std::string const &newName);
	~Victim();
	Victim(Victim const &victim);
	Victim &operator=(Victim const &victim);
	std::string	const &getName() const;
	virtual void getPolymorphed() const;
};
	std::ostream &operator<<(std::ostream &os, Victim const &victim);
#endif