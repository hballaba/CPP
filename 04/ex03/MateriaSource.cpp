#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    _size = 0;

}

MateriaSource::~MateriaSource() {

}

MateriaSource::MateriaSource(MateriaSource const & toCopy) {
    this->_size = toCopy._size;
    this->AM[0] = toCopy.AM[0];
    this->AM[1] = toCopy.AM[1];
    this->AM[2] = toCopy.AM[2];
    this->AM[3] = toCopy.AM[3];
}

MateriaSource & MateriaSource::operator = (MateriaSource const & toCopy) {
    this->_size = toCopy._size;
    this->AM[0] = toCopy.AM[0];
    this->AM[1] = toCopy.AM[1];
    this->AM[2] = toCopy.AM[2];
    this->AM[3] = toCopy.AM[3];
    return (*this);
}

void        MateriaSource::learnMateria(AMateria *materia)
{
    if (this->_size == 4)
        std::cout << "Slot for lerning is full!" << std::endl;
    else {
        this->AM[this->_size] = materia;
        
        this->_size++;
    }
}

AMateria*   MateriaSource::createMateria(std::string const & type) {
    
    int i = -1;
    while (++i < _size) {
        if (type == AM[i]->getType()) {
            return (AM[i]);
        }
    }    
    return (0);
}
