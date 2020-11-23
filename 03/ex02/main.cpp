/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 00:15:04 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 20:18:16 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "unistd.h"

int	main(void)
{		
	{
		FragTrap ft = FragTrap("My_Fragtrap");
		std::cout << ft << std::endl;
		ft.meleeAttack("Target_1");
		ft.rangedAttack("Target_2");
		ft.takeDamage(100);
		ft.beRepaired(3);
		ft.vaulthunter_dot_exe("Target_3");
		sleep(1);
		ft.vaulthunter_dot_exe("Target_3");
		std::cout << ft << std::endl;
	}
	{
		ScavTrap st = ScavTrap("My_Scavtrap");
		std::cout << st << std::endl;
		st.meleeAttack("Target_1");
		st.rangedAttack("Target_2");
		st.takeDamage(100);
		st.beRepaired(3);
		st.challengeNewcomer();
		sleep(1);
		st.challengeNewcomer();
		std::cout << st << std::endl;
	}
	return (0);
}