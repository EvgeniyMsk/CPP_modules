/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:07:06 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/26 13:11:18 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string const &newName)
{
	name = newName;
	std::cout << "Some random victim called " + name + " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " + name + " just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim const &victim)
{
	*this = victim;
	std::cout << "Some random victim called " + name + " just appeared!" << std::endl;
}
	
Victim &Victim::operator=(Victim const &victim){
	name = victim.name;
	return (*this);
}

std::string const &Victim::getName() const
{
	return (name);
}

void Victim::getPolymorphed() const
{
	std::cout << name + " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Victim const &victim)
{
	os << "I'm " + victim.getName()+ " and I like otters!" << std::endl;
	return (os);
}