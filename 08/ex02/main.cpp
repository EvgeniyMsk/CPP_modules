/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 15:11:19 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/20 15:11:43 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
int main(void)
{
	MutantStack<int> mstack;
	mstack.push(5); 
	mstack.push(17);
	std::cout << mstack.top() << std::endl; 
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3); 
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) 
	{
    	std::cout << *it << std::endl;
		++it; 
	}
	std::stack<int> s(mstack);
	return (0);
}