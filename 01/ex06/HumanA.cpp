/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 00:35:01 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/14 22:42:44 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::

HumanA::HumanA(std::string newName, Weapon &newWeapon)
{
	name = newName;
	weapon = &newWeapon;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &newWeapon)
{
	this->weapon = &newWeapon;
}