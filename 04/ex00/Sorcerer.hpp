/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:01:51 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/26 12:20:59 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string		name;
	std::string		title;
	Sorcerer();
public:
	Sorcerer(std::string const &newName, std::string const &newTitle);
	~Sorcerer();
	Sorcerer(Sorcerer const &sorcerer);
	Sorcerer &operator=(Sorcerer const &sorcerer);
	std::string	const getName() const;
	std::string	const getTitle() const;
	void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &os, Sorcerer const &sorcerer);

#endif