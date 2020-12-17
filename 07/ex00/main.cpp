/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 15:29:00 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/17 15:29:01 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	{
		std::cout << "***Int test***" << std::endl;
		int a = 100;
		int b = 500;
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
		std::cout << "min = " << min(a, b) << std::endl;
		std::cout << "max = " << max(a, b) << std::endl;
		swap(a, b);
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
	}
	{
		std::cout << "***Float test***" << std::endl;
		float a = 100;
		float b = 500;
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
		std::cout << "min = " << min(a, b) << std::endl;
		std::cout << "max = " << max(a, b) << std::endl;
		swap(a, b);
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
	}
	{
		std::cout << "***String test***" << std::endl;
		std::string s1 = "aaaaaaaaaaaa";
		std::string s2 = "bbbbbbbbbbbb";
		std::cout << "s1 = " << s1 << std::endl << "s2 = " << s2 << std::endl;
		std::cout << "min = " << min(s1, s2) << std::endl;
		std::cout << "max = " << max(s1, s2) << std::endl;
		swap(s1, s2);
		std::cout << "s1 = " << s1 << std::endl << "s2 = " << s2 << std::endl;
	}
	{
		std::cout << "***Char test***" << std::endl;
		char ch1 = 'a';
		char ch2 = 'z';
		std::cout << "ch1 = " << ch1 << std::endl << "ch2 = " << ch2 << std::endl;
		std::cout << "min = " << min(ch1, ch2) << std::endl;
		std::cout << "max = " << max(ch1, ch2) << std::endl;
		swap(ch1, ch2);
		std::cout << "ch1 = " << ch1 << std::endl << "ch2 = " << ch2 << std::endl;
	}
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return (0);
}