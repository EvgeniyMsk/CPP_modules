#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main() 
{
   	// {
	// 	IMateriaSource* src = new MateriaSource();
	// 	src->learnMateria(new Ice());
	// 	src->learnMateria(new Cure());
	// 	ICharacter* me = new Character("me");
	// 	AMateria *tmp = nullptr;
	// 	AMateria *first = nullptr;
	// 	tmp = src->createMateria("fire");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("ice");
	// 	first = tmp;
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	delete tmp;
	// 	me->equip(nullptr);
	// 	std::cout << "________________" << std::endl;
	// 	ICharacter* bob = new Character("bob");
	// 	me->use(-1, *bob);
	// 	std::cout << "materia exp: " << first->getXP() << std::endl;
	// 	me->use(0, *bob);
	// 	me->use(0, *bob);
	// 	std::cout << "materia exp: " << first->getXP() << std::endl;
	// 	me->use(1, *bob);
	// 	me->use(2, *bob);
	// 	me->use(3, *bob);
	// 	me->use(4, *bob);
	// 	std::cout << "________________" << std::endl;
	// 	me->unequip(0);
	// 	std::cout << "materia exp: " << first->getXP() << std::endl;
	// 	me->use(0, *bob);
	// 	std::cout << "materia exp: " << first->getXP() << std::endl;
	// 	me->use(3, *bob);
	// 	me->unequip(-1);
	// 	me->equip(first);
	// 	delete bob;
	// 	delete me;
	// 	delete src;
	// 	return (0);
	// }
	
	{
		IMateriaSource* src = new MateriaSource();
    	src->learnMateria(new Ice());
    	src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
		return 0;
	}
}