/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 21:49:58 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/26 21:50:14 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy)
{
	*this = copy;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &plasmarifle)
{
	name = plasmarifle.name;
	damage = plasmarifle.damage;
	shootingCost = plasmarifle.shootingCost;
	APCost = plasmarifle.APCost;
	return (*this);
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
