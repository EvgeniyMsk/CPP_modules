#include "Cure.hpp"

Cure::Cure() :
	AMateria("cure")
{
}

Cure::Cure(Cure const &copy)
{
	*this = copy;
}

Cure::~Cure()
{
	
}

Cure &Cure::operator=(Cure const &cure)
{
	type = cure.getType();
	_xp = cure.getXP();
	return (*this);
}

AMateria *Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return (clone);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}