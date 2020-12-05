#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const &newName)
{
	name = newName;
	count = 0;
	for (int i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

Character::Character(Character const &copy)
{
	name = copy.getName();

	for (int i = 0; i < 4; i++)
		if (copy.inventory[i])
			inventory[i] = copy.inventory[i]->clone();
		else
			inventory[i] = nullptr;
}

Character &Character::operator=(Character const &character)
{
	name = character.getName();
	count = character.count;
	for (int i = 0; i < 4; i++)
		if (character.inventory[i])
			inventory[i] = character.inventory[i]->clone();
		else
			inventory[i] = nullptr;
	return (*this);
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
		delete inventory[i];
	
}

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	if (count == 4 || m == nullptr)
		return ;
	for (int i = 0; i < count; i++)
		if (this->inventory[i] == m)
			return ;
	this->inventory[count++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= count || inventory[idx] == nullptr)
		return ;
	for (int i = idx; i < 3; i++)
	{
		this->inventory[i] = this->inventory[i + 1];
		this->inventory[i + 1] = nullptr;
	}
	count--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && inventory[idx] != nullptr)
		inventory[idx]->use(target);
}