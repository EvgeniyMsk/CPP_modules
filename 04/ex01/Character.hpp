/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 22:23:03 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/27 22:51:15 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string	name;
	int			ap;
	AWeapon		*weapon;
	Character();
public:
	Character(std::string const &newName);
	Character(Character const &copy);
	Character &operator=(Character const &character);
	virtual ~Character();
	void recoverAP();
	void equip(AWeapon *newWeapon);
    void attack(Enemy *newEnemy);
	std::string const &getName() const;
	int getAp() const;
	AWeapon *getWeapon() const;
};
std::ostream &operator<<(std::ostream &os, Character const &character);

#endif