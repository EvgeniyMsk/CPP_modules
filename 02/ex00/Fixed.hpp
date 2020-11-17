/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 21:43:03 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/17 11:19:13 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int					fixedPointValue;
	static const int 	fractionalBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(Fixed &fixed);
	Fixed &operator = (const Fixed &fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif