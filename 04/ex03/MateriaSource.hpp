#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

//class AMateria;

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*AM[4];
	int			_size;

public:
    virtual ~MateriaSource();
	MateriaSource();
	MateriaSource(MateriaSource const & toCopy);
	MateriaSource & operator = (MateriaSource const & toCopy);

    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};

#endif