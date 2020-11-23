/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 00:15:04 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 20:18:45 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "unistd.h"

int	main(void)
{
		ClapTrap ct = ClapTrap("My_Claptrap");
		std::cout << ct << std::endl;
		ct.meleeAttack("Target_1");
		ct.rangedAttack("Target_2");
		ct.takeDamage(100);
		ct.beRepaired(3);
		std::cout << ct << std::endl;
		
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

		NinjaTrap nt = NinjaTrap("My_Ninjatrap");
		std::cout << nt << std::endl;
		nt.meleeAttack("Target_1");
		nt.rangedAttack("Target_2");
		nt.takeDamage(100);
		nt.beRepaired(3);
		nt.ninjaShoebox(ct);
		nt.ninjaShoebox(ft);
		nt.ninjaShoebox(st);
		nt.ninjaShoebox(nt);
		std::cout << nt << std::endl;
	return (0);
}