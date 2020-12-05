/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:56:15 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/29 15:25:47 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP
#include <iostream>

class ISpaceMarine
{
       public:
       virtual ~ISpaceMarine() {}
       virtual ISpaceMarine* clone() const = 0;
       virtual void battleCry() const = 0;
       virtual void rangedAttack() const = 0;
       virtual void meleeAttack() const = 0;
};


#endif