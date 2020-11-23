/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 21:42:55 by qsymond           #+#    #+#             */
/*   Updated: 2020/11/20 13:52:36 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int param)
{
	fixedPointValue = param << fractionalBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float param)
{
	fixedPointValue = roundf(param * (1 << fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixedPointValue = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return (this->fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)(fixedPointValue) / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
	return (fixedPointValue >> fractionalBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &value)
{
	os << value.toFloat();
	return (os);
}