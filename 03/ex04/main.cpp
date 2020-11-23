/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 00:15:04 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 21:40:27 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"
#include "unistd.h"

int	main(void)
{
	FragTrap ft = FragTrap("My_Fragtrap");
	std::cout << ft << std::endl;

	SuperTrap st = SuperTrap("My_Supertrap");
	std::cout << st << std::endl;
	st.ninjaShoebox(ft);
	st.meleeAttack("Target_1");
	st.rangedAttack("Target_2");
	st.beRepaired(100);
	st.vaulthunter_dot_exe("Target_3");
	std::cout << st << std::endl;
	return (0);
}