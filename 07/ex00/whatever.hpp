/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 15:29:04 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/17 15:29:05 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T>
void swap(T &first, T &second)
{
	T temp;
	temp = first;
	first = second;
	second = temp;
}

template <typename T>
T min(T &first, T &second)
{
	if (second <= first)
		return (second);
	return (first);
}

template <typename T>
T max(T &first, T &second)
{
	if (second >= first)
		return (second);
	return (first);
}

#endif