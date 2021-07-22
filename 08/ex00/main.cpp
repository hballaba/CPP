#include "easyfind.hpp"

int main() {
    try {
        std::vector<int> vect;
        vect.push_back(1);
        vect.push_back(2);
        vect.push_back(3);
        vect.push_back(4);
    
        int num = 3;
        ::easyfind(vect, num);

        std::cout << std::endl;

        num = 5;
        ::easyfind(vect, num);
    }
    catch(std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    catch(char const *e) {
        std::cerr << e << std::endl;
    }
    return 0;
}