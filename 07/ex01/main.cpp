#include "iter.hpp"

template <typename T>
void    print(T const & element) {
    std::cout << element << std::endl;
}

int main() {
    
    int arrI[5] = {1, 2, 3, 4, 5};
    iter(arrI, 5, print);

    std::string arrS[5] = {"one", "two", "three", "four", "five"};
    iter(arrS, 5, print);

    char arrC[] = {'a', 'b', 'c', 'd'};
    iter(arrC, 4, print);

    return 0;
}