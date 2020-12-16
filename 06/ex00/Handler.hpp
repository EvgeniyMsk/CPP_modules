#ifndef HANDLER_HPP
#define HANDLER_HPP
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cfloat>

class Handler
{
private:
    std::string data;
    long double number;
	bool		isPossible;
	Handler();
public:
	Handler(std::string const &newData);
	Handler(Handler const &copy);
	Handler &operator=(Handler const &handler);
    ~Handler();
    char	toChar() const;
    int		toInt() const;
	float	toFloat() const;
	double	toDouble() const;
	class HandlerExtension : public std::exception {public: HandlerExtension(std::string const &reason);};
};
std::ostream &operator<<(std::ostream &os, Handler const &handler);

#endif