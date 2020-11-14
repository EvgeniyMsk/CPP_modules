/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 22:35:05 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/14 22:38:18 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon			*weapon;
	std::string		name;
public:
	HumanB(std::string newName);
	~HumanB();
	void		attack();
	void		setWeapon(Weapon &newWeapon);
};

#endif