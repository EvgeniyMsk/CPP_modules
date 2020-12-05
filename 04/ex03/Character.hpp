#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria *inventory[4];
	int count;
	Character();
public:
	Character(std::string const &newName);
	Character(Character const &copy);
	Character &operator=(Character const &character);
	virtual ~Character();
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif