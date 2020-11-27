/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:56:49 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/26 13:10:20 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const &newName) :
	Victim(newName)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &copy) :
	Victim(copy.getName())
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(Peon const &peon)
{
	name = peon.name;
	return (*this);
}

void	Peon::getPolymorphed() const
{
	std::cout << name + " has been turned into a pink pony!" << std::endl;
}