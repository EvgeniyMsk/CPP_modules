/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:17:44 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/05 13:41:46 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	type = "none";
	_xp = 0;
}

AMateria::AMateria(std::string const &newType)
{
	type = newType;
	_xp = 0;
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

AMateria &AMateria::operator=(AMateria const &amateria)
{
	type = amateria.getType();
	_xp = amateria.getXP();
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (type);
}

unsigned int AMateria::getXP() const
{
	return (_xp);
}

void AMateria::use(ICharacter &target)
{
	(void) target;
	_xp += 10;
}