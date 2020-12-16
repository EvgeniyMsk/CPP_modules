#include "Handler.hpp"

Handler::Handler()
{
}

Handler::Handler(std::string const &newData)
{
	data = newData;
	char *del = NULL;
	number = strtod(data.c_str(), &del);
	if (!strlen(del) || 
	((strlen(del) == 1) && (del[0] == 'f') && (data[0] != 'f')))
		isPossible = true;
}

Handler::Handler(Handler const &copy)
{
	*this = copy;
}

Handler &Handler::operator=(Handler const &handler)
{
	data = handler.data;
	number = handler.number;
	isPossible = handler.isPossible;
	return (*this);
}

Handler::~Handler()
{
}

char Handler::toChar() const
{
	char result;

	result = static_cast<char>(number);
	if (!isPossible || std::isnan(number) || number > 127 || number < -128)
		throw HandlerExtension("impossible");
	if (!(isprint(result)))
		throw HandlerExtension("Non displayable");
	return (result);
}

int Handler::toInt() const
{
	int result;

	result = static_cast<int>(number);
	if (!isPossible || std::isnan(number) || number > INT32_MAX || number < INT32_MIN)
		throw HandlerExtension("impossible");
	return (result);
}

float Handler::toFloat() const
{
	float result;

	result = static_cast<float>(number);
	if (!isPossible)
		throw HandlerExtension("impossible");
	if (isnan(result))	
		throw HandlerExtension("nanf");
	if (isinf(result))
	{
		if (result > 0)
			throw HandlerExtension("+inf");
		else if (result < 0)
			throw HandlerExtension("-inf");
	}
	return (result);
}

double Handler::toDouble() const
{
	if (!isPossible)
		throw HandlerExtension("impossible");
	if (isnan(number))	
		throw HandlerExtension("nan");
	if (isinf(number))
	{
	if (number > 0)
		throw HandlerExtension("+inf");
	else if (number < 0)
		throw HandlerExtension("-inf");
	}
	return (number);
}

Handler::HandlerExtension::HandlerExtension(std::string const &reason)
{
	std::cout << reason << std::endl;
}

std::ostream &operator<<(std::ostream &os, Handler const &handler)
{
	try
	{os << "char: " << handler.toChar() << std::endl;}
	catch(const std::exception& e){}

	try{os << "int: " << handler.toInt() << std::endl;}
	catch(const std::exception& e){}

	try{os << "float: " << std::fixed << std::setprecision(1) << handler.toFloat() << "f" <<std::endl;}
	catch(const std::exception& e){}

	try{os << "double: " << std::fixed << std::setprecision(1) << handler.toDouble() <<std::endl;}
	catch(const std::exception& e){}

	return (os);
}