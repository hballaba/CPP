#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void    identify_from_pointer(Base * p) {
    try {
        A *a = dynamic_cast<A*>(p);
        B *b = dynamic_cast<B*>(p);
        C *c = dynamic_cast<C*>(p);
        if (a)
            std::cout << "A" << std::endl;
        else if (b)
            std::cout << "B" << std::endl;
        else if (c)
            std::cout << "C" << std::endl;
        else
            throw "Not child class";
        
    }
    catch (std::exception &e) {
    }
    catch (char const *e) {
        std::cerr << e << std::endl;
    }
}

void    identify_from_reference(Base & p) {
    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::exception &e) {
    }
    try {
        B b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch (std::exception &e) {
    }
    try {
        C c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch (std::exception &e) {
    }
}

Base *  generate(void) {
std::srand(std::time(NULL));
int random = std::rand() % 3;
if (random == 1)
    return (new A());
else if (random == 2)
    return (new B());
else 
    return (new C());
}


int     main() {
    Base *p = generate();
    identify_from_pointer(p);
    identify_from_reference(*p);
    return 0;
}