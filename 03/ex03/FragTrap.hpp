/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 00:14:50 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/23 20:13:10 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string newName);
	~FragTrap();
	FragTrap(FragTrap const &fragtrap);
	FragTrap 	&operator=(FragTrap const &fragtrap);
	void		vaulthunter_dot_exe(std::string const &target);
	std::string	getInfo() const;
};
#endif