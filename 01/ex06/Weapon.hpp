/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 00:23:41 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/14 20:48:07 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
private:
	std::string		type;
public:
	Weapon();
	Weapon(std::string newType);
	~Weapon();
	std::string const	&getType();
	void				setType(std::string newType);
};




#endif