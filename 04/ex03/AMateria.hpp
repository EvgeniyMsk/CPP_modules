#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
protected:
	std::string		type;
	unsigned int	_xp;
	AMateria();
public:
	AMateria(std::string const &newType);
	virtual ~AMateria();
	AMateria(AMateria const &copy);
	AMateria &operator=(AMateria const &amateria);
	std::string const &getType() const;
	unsigned int getXP() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif