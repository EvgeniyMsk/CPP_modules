/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 21:29:20 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/27 22:19:48 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const &newName, int newAPCost, int newDamage)
{
	name = newName;
	APCost = newAPCost;
	damage = newDamage;
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const &copy)
{
	*this = copy;
}

AWeapon &AWeapon::operator=(AWeapon const &weapon)
{
	name = weapon.name;
	damage = weapon.damage;
	shootingCost = weapon.shootingCost;
	APCost = weapon.APCost;
	return (*this);
}

std::string const &AWeapon::getName() const
{
	return (name);
}

int	AWeapon::getAPCost() const
{
	return (APCost);
}

int	AWeapon::getDamage() const
{
	return (damage);
}