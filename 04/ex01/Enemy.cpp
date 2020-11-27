/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 22:05:49 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/27 22:43:13 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int newHp, std::string const &newType)
{
	hp = newHp;
	type = newType;
}

Enemy::Enemy(Enemy const &copy)
{
	*this = copy;
}

Enemy &Enemy::operator=(Enemy const &enemy)
{
	hp = enemy.hp;
	type = enemy.type;
	return (*this);
}

Enemy::~Enemy()
{
}

std::string const &Enemy::getType() const 
{
	return (type);
}

int Enemy::getHP() const 
{
	return (hp);
}

void Enemy::takeDamage(int damage)
{
	int result = hp - damage;
	if (result <= 0)
	{
		delete (this);
		return;
	}
	hp = result;
}