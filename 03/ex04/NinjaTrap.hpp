/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:13:16 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 21:32:24 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string newName);
	~NinjaTrap();
	NinjaTrap(NinjaTrap const &ninja);
	NinjaTrap 	&operator=(NinjaTrap const &ninja);
	std::string		getInfo() const;
	void ninjaShoebox(ClapTrap &target);
	void ninjaShoebox(FragTrap &target);
	void ninjaShoebox(ScavTrap &target);
	void ninjaShoebox(NinjaTrap &target);
};

#endif