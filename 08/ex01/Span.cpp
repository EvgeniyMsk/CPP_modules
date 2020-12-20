#include "Span.hpp"

Span::Span() :
	N(0)
{
}

Span::Span(unsigned int newN)
{
	N = abs((int)newN);
}

Span::Span(Span const &copy)
{
	std::vector<const int>::iterator it;
	N = copy.N;
	this->clear();
	for (it = copy.begin(); it != copy.end(); ++it)
		this->push_back(*it);
}

Span &Span::operator=(Span &span)
{
	std::vector<const int>::iterator it;
	N = span.N;
	this->clear();
	for (it = span.begin(); it != span.end(); ++it)
		this->push_back(*it);
	return (*this);
}

Span::~Span()
{
}

void	Span::addNumber(int number)
{
	static int count = N;
	if (count > 0)
	{
		this->push_back(number);
		count--;
	}
	else
		throw SpanException("Out of range!");
}

int Span::shortestSpan()
{
	Span temp = Span(*this);
	std::sort(temp.begin(), temp.end());
	if (N == 0)
		return (0);
	else if (N == 1)
		return (*(temp.end() - 1));
	else
	{
		std::vector<const int>::iterator it;
		int i = INT_MAX;
		for (it = temp.begin(); it != temp.end() - 1; ++it)
			if (i > std::abs(*it - *(it + 1)))
				i = std::abs(*it - *(it + 1));
		return (i);
	}
	
}

int Span::longestSpan()
{
	Span temp = Span(*this);
	std::sort(temp.begin(), temp.end());
	if (N == 0)
		return (0);
	else if (N == 1)
		return (*(temp.end() - 1));
	return (std::abs(*(temp.end() - 1) - *temp.begin()));
}