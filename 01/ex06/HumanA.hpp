/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 00:33:45 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/14 22:32:48 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon			*weapon;
	std::string		name;
public:
	HumanA(std::string newName, Weapon &newWeapon);
	~HumanA();
	void		attack();
	void		setWeapon(Weapon &newWeapon);
};

#endif