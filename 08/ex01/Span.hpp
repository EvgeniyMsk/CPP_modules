/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 22:25:24 by qsymond           #+#    #+#             */
/*   Updated: 2020/12/18 22:25:25 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <cmath>

class Span : public std::vector<int>
{
private:
	Span();
public:
	unsigned int N;
	Span(unsigned int newN);
	Span(Span const &copy);
	Span &operator=(Span &span);
	~Span();
	void addNumber(int number);
	class SpanException : public std::exception {public: SpanException(std::string const reason) {std::cout << reason << std::endl;};};
	int shortestSpan();
	int longestSpan();
};

#endif