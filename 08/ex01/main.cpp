#include "span.hpp"

int Random()
{
   const int min = 0;
   const int max = 10000000;
   return min + std::rand() % (max - min + 1);;
}

int main()
{
    try {
        Span sp = Span(5);

        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    catch (char const *e) {
        std::cout << e << std::endl;
    }

     try {
        unsigned int num = 10000;
        std::vector<int> vec(num);
        Span sp(num);

        std::srand(std::time(0));
        std::generate(std::begin(vec), std::end(vec), Random);
        sp.setArray(vec);
        

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        sp.addNumber(11);

    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    catch (char const *e) {
        std::cout << e << std::endl;
    }

    return 0;
}