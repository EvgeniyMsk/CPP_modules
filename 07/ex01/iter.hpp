/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 15:28:50 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/17 15:28:51 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void iter(T *address, size_t length, void (*function)(T const &value))
{
	for (size_t i = 0; i < length; i++)
		(*function)(address[i]);
}

template <typename T>
void show(T const &value)
{
	std::cout << value << std::endl;
}

#endif