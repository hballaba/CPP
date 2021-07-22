#include "span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : _n(n), _count(0) {
    _array.resize(n);
}

Span::~Span() { }

Span::Span(Span const & toCopy) {
    this->_count = toCopy._count;
    this->_n = toCopy._n;
    _array.resize(toCopy._n);
    for(unsigned int i = 0; i < toCopy._n; i++)
        this->_array[i] = toCopy._array[i];
}

Span & Span::operator = (Span const & toCopy) {
    if (this == &toCopy)
        return *this;
    this->_count = toCopy._count;
    this->_n = toCopy._n;
    _array.resize(toCopy._n);
    for(unsigned int i = 0; i < toCopy._n; i++)
        this->_array[i] = toCopy._array[i];
    return (*this);
}

void    Span::addNumber(int const &i) {
    if (_count >= _n)
        throw "This array is already full!";
    else  _array.at(_count++) = i;    
}

int     Span::longestSpan() {
    //int max, min;

    if (_n <= 1)
        throw "Errot: too few elements in the array!";
    else {
            std::set<int> sets; 
            for (unsigned int i = 0; i < _count; i++)
                sets.insert(_array[i]);
            for (unsigned int i = 0; i < _count; i++)
                sets.insert(_array[i]);    
            return (*std::prev(sets.end()) - *sets.begin()); 
           // max = *std::max_element(begin(_array), std::end(_array));
           //min = *std::min_element(begin(_array), std::end(_array));
           //return (max - min);
    }
    
}

int    Span::shortestSpan() {
    int dif = 0;
    if (_n <= 1)
        throw "Errot: too few elements in the array!";
    else {
            int tmp;
            std::vector<int> temp(_array);
            
            std::sort(begin(temp), end(temp));
            tmp = temp[1] - temp[0]; 
            for(std::vector<int>::iterator i = temp.begin() + 1; i < temp.end(); ++i) {             
                dif = *i - *(i - 1);
                if (dif < tmp)
                    tmp = dif;
                dif = tmp;      
          }
    }
    return dif;
}

void    Span::setArray(std::vector<int> arr)  {
    _array = arr;
    _n = arr.size();
    _count = _n;
}