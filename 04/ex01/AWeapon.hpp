/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:54:57 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/27 21:13:27 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>

class AWeapon
{
protected:
	std::string		name;
	int				damage;
	int				shootingCost;
	int				APCost;
	AWeapon();
public:
	AWeapon(std::string const &newName, int newAPCost, int newDamage);
	virtual ~AWeapon();
	AWeapon(AWeapon const &copy);
	AWeapon &operator=(AWeapon const &weapon);
	std::string const &getName() const;
	int getAPCost() const;
    int getDamage() const;
	virtual void attack() const = 0;
};

#endif