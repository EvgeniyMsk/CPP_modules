#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
	int count;
	AMateria *materies[4];
	public:
	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	MateriaSource &operator=(MateriaSource const &materiasource);
	virtual ~MateriaSource();
	void learnMateria(AMateria *amateria);
	AMateria *createMateria(std::string const &type);
};

#endif