/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 11:01:16 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 21:35:41 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:
    SuperTrap();
    SuperTrap(std::string name);
    ~SuperTrap();
    SuperTrap(SuperTrap const &supertrap);
	SuperTrap 	&operator=(SuperTrap const &supertrap);
    void meleeAttack(std::string const &target);
    void rangedAttack(std::string const &target);
};

#endif