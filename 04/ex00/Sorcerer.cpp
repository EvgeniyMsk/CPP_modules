/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:04:44 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/26 12:22:50 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	name = "Qsymond";
	title = "T_qsymond";
	std::cout << "[Sorcerer] " + name + " " + title + " created!" << std::endl;
}

Sorcerer::Sorcerer(std::string const &newName, std::string const &newTitle)
{
	name = newName;
	title = newTitle;
	std::cout << name + ", " + title + ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name + ", " + title + ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &sorcerer)
{
	*this = sorcerer;
	std::cout << name + ", " + title + ", is born!" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &sorcerer)
{
	name = sorcerer.name;
	title = sorcerer.title;
	return (*this);
}

std::string	const Sorcerer::getName() const
{
	return (name);
}

std::string	const Sorcerer::getTitle() const
{
	return (title);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &os, Sorcerer const &sorcerer)
{
	os << "I am " + sorcerer.getName() + ", " + sorcerer.getTitle() + " , and I like ponies!" << std::endl;
	return (os);
}