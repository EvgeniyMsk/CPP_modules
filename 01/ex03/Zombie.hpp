/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:34:31 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/11 20:36:07 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	name;
	std::string	type;
public:
	Zombie();
	Zombie(std::string newName, std::string newType);
	~Zombie();
	void	announce();
	void	setTypeName(std::string newName, std::string newType);
};

#endif
