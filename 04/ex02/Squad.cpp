#include "Squad.hpp"

Squad::Squad() {
    _size = 0;
    _squad = nullptr;
}

Squad::~Squad() {
	for (int i = 0; i < _size; i++)
    {
       delete _squad[i];
  	}
	delete [] _squad;
}

Squad::Squad(Squad const &toCopy) {
   this->_size   = toCopy._size;
   this->_squad = new ISpaceMarine* [toCopy._size];
   for (int i = 0; i < toCopy._size; i++)
   {
       this->_squad[i] = toCopy._squad[i];
   }
}

Squad & Squad::operator = (Squad const & toCopy) {
	if (this->_squad != nullptr) {
		for (int i = 0; i < _size; i++)
    		delete _squad[i];
		delete [] _squad;
	}
	this->_size   = toCopy._size;
    this->_squad = new ISpaceMarine* [toCopy._size];
    for (int i = 0; i < toCopy._size; i++)
    {
       this->_squad[i] = toCopy._squad[i];
  	}
    
    return(*this);
}

int             Squad::getCount() const {
    return (_size);
}

ISpaceMarine*   Squad::getUnit(int i) const {
	if (_size == 0) { 
		std::cout << "Squad is empty" << std::endl;
		return (nullptr);
	}
	if (i > _size - 1) {
		std::cout << "Еhere is no squad with number " << i << std::endl;
		return (nullptr);
	}
    return(_squad[i]);
 }

 int            Squad::push(ISpaceMarine* space) {
        _size++;
        int i = 0;
        if (_size == 1) {
			_squad = new ISpaceMarine* [_size];
			_squad[_size - 1] = space;
		}
        else {
            ISpaceMarine **tmpsquad = new ISpaceMarine* [_size];
            while(i + 1 < _size)
            {
                tmpsquad[i] = _squad[i];
                i++;
            }
			delete [] _squad;
			_squad = nullptr;
            tmpsquad[i] = space;
            this->_squad = tmpsquad;
        }

    return (_size);
 }
