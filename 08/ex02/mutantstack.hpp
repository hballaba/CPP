#ifndef MUTANTASTACK_HPP

# define MUTANTASTACK_HPP

#include <iostream>
#include <stack>
#include <list>


template <typename T>
class MutantStack : public std::stack<T> {

public:
	MutantStack() {}
	~MutantStack() {}
	MutantStack(MutantStack const& toCopy) {
		*this = toCopy;
	}
	MutantStack & operator = (MutantStack const& toCopy) {
		if (this == &toCopy)
        return (*this);
    *this = toCopy;
    return (*this);
	}
    
	typedef typename std::stack<T>::container_type::iterator iterator;
		
	 iterator begin() {
	 	return this->c.begin();
	}
	iterator end() {
		return this->c.end();
	}
};

#endif