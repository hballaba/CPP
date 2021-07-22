#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void    easyfind (std::vector<T> const &t, int const & num) {
    
    typename std::vector<T>::const_iterator it;

    it = find(t.begin(), t.end(), num);
    if (it != t.end())
        std::cout << "Number " << num << " exists in the container" << std::endl;
    else
        throw "This number not exists in the container";    
}
