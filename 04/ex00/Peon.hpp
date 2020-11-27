/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:55:44 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/26 13:07:26 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();
public:
	Peon(std::string const &newName);
	Peon(Peon const &copy);
	~Peon();
	Peon &operator=(Peon const &peon);
	void getPolymorphed() const;
};

#endif
