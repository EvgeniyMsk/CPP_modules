/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 21:50:29 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/26 21:50:34 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &copy)
{
	*this = copy;
}

PowerFist &PowerFist::operator=(PowerFist const &powerfist)
{
	name = powerfist.name;
	damage = powerfist.damage;
	shootingCost = powerfist.shootingCost;
	APCost = powerfist.APCost;
	return (*this);
}

PowerFist::~PowerFist()
{
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}