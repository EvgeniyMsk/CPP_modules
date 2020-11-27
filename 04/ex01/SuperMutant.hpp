/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 22:18:32 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/27 22:08:00 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(SuperMutant const &copy);
	SuperMutant &operator=(SuperMutant const &supermutant);
	void takeDamage(int damage);
};

#endif