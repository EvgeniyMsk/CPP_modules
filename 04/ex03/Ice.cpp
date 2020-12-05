#include "Ice.hpp"

Ice::Ice() :
	AMateria("ice")
{
}

Ice::Ice(Ice const &copy)
{
	*this = copy;
}

Ice::~Ice()
{
	
}

Ice &Ice::operator=(Ice const &ice)
{
	type = ice.getType();
	_xp = ice.getXP();
	return (*this);
}

AMateria *Ice::clone() const
{
	Ice *clone = new Ice(*this);
	return (clone);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}