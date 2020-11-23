/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:42:09 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 20:32:15 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string newName);
	~ScavTrap();
	ScavTrap(ScavTrap const &scavtrap);
	ScavTrap 	&operator=(ScavTrap const &scavtrap);
	void		challengeNewcomer();
	std::string	getInfo() const;
};


#endif
