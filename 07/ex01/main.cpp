/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 15:28:53 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/17 15:28:54 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	std::string stringR[5] = { "line1", "line2", "line3", "line4", "line5" };
	iter(stringR, 5, &show);
	bool boolArr[2] = { false, true };
	iter(boolArr, 2, &show); 
	int intArr[5] = { 0, 1, 2, 3, 4 };
	iter(intArr, 5, &show); 
	float floatArr[5] = { 1.4, 2.4, 2.24, 3.365, 41.456 };
	iter(floatArr, 5, &show);
	double doubleArr[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(doubleArr, 5, &show);
	return (0);
}