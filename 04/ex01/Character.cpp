/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 22:51:18 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/27 23:03:56 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const &newName)
{
	ap = 40;
	name = newName;
}

Character::Character(Character const &copy)
{
	*this = copy;
}

Character &Character::operator=(Character const &character)
{
	name = character.name;
	ap = character.ap;
	weapon = character.weapon;
	return (*this);
}

Character::~Character()
{
}

void Character::recoverAP()
{
	int result = ap + 10;
	ap = ap >= 40 ? 40 : result;
}

void Character::equip(AWeapon *newWeapon)
{
	weapon = newWeapon;
}

void Character::attack(Enemy *newEnemy)
{
	if (!weapon)
		return;
	int result = ap - weapon->getAPCost();
	if (result < 0)
		std::cout << "No enought AP!" << std::endl;
	else
	{
		ap = result;
		std::cout << name + " attacks " + newEnemy->getType() + " with a " + weapon->getName() << std::endl;
		weapon->attack();
		newEnemy->takeDamage(weapon->getDamage());
	}
}

std::string const &Character::getName() const
{
	return (name);
}

int	Character::getAp() const
{
	return (ap);
}

AWeapon	*Character::getWeapon() const 
{
	return (weapon);
}

std::ostream &operator<<(std::ostream &os, Character const &character)
{
	if (!character.getWeapon())
		os << character.getName() + " has " << character.getAp() << " AP and is unarmed" << std::endl;
	else
		os << character.getName() + " has " << character.getAp() <<  " AP and wields a " << character.getWeapon()->getName() << std::endl;
	return (os);
}