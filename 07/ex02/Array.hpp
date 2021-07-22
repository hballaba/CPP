#include <iostream>
#include <string>

template <class T>
class Array {
private:
    T *_array;
    unsigned int _n;

public:
    Array() {
         _array = new T; 
         _n = 0;
    }
     Array(unsigned int n) {
         _array = new T[n];
         _n = n;
    }
    ~Array() {
        delete [] _array;
    }
    Array(Array const & toCopy) {
        this->operator = (toCopy);
    }
    Array & operator = (Array const & toCopy) {
        this->_n = toCopy._n;
        delete [] this->_array;
        this->_array = new T [this->_n];
        for(int i = 0; i < this->_n; i++)
            this->_array[i] = toCopy._array[i];
        return (*this);
    }
    T & operator [] (const unsigned int index) {
        if (index > _n - 1) 
            throw "Error: There is no such index"; 
        return _array[index];
    }

    unsigned int size() {return _n;};
};

