/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 00:25:10 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/14 22:46:43 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string newType)
{
	this->type = newType;
}

Weapon::~Weapon()
{
}

std::string const	&Weapon::getType()
{
	return	this->type;
}

void				Weapon::setType(std::string	const newType)
{
	this->type = newType;
}			