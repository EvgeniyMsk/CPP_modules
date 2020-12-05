#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP
#include "ISpaceMarine.hpp"
class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &copy);
	AssaultTerminator &operator=(AssaultTerminator const &assaultterminator);
	virtual ~AssaultTerminator();
	ISpaceMarine *clone() const;
	void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy)
{
	*this = copy;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &assaultterminator)
{
	(void)assaultterminator;
	return (*this);
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

ISpaceMarine *AssaultTerminator::clone() const
{
	ISpaceMarine *copy = new AssaultTerminator(*this);
	return (copy);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

#endif