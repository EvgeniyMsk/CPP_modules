/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 21:53:03 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/27 21:13:50 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>

class Enemy
{
protected:
	int hp;
	std::string type;
	Enemy();
public:
	Enemy(int newHp, std::string const &newType);
	Enemy(Enemy const &copy);
	Enemy &operator=(Enemy const &enemy);
	virtual ~Enemy();
	std::string const &getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);
};

#endif