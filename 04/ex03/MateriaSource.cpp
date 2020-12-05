#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	count = 0;
	for (int i = 0; i < 4; i++)
		materies[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	*this = copy;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &materiasource)
{
	count = materiasource.count;
	for (int i = 0; i < 4; i++)
		if (materiasource.materies[i])
			materies[i] = materiasource.materies[i]->clone();
		else
			materies[i] = nullptr;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete materies[i];
}

void MateriaSource::learnMateria(AMateria *amateria)
{
	if (count < 3 && amateria != nullptr)
	{
		count++;
		materies[count - 1] = amateria->clone();
	}
	else
		std::cout << "All slots of materias is busy!" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < count + 1; i++)
	{
		if (materies[i] && !materies[i]->getType().compare(type))
			return (materies[i]->clone());
	}
	return (nullptr);
}