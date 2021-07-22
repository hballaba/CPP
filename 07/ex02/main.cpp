#include "Array.hpp"

int main() {
    try {
        Array<int> arr;
        std::cout << arr[0] << std::endl;

        Array<int> arr2(2);
        arr2[1] = 5;
        std::cout << arr2[1] << std::endl;
    }
     catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    catch (const char * e) {
        std::cerr << e << std::endl;
    }

    try {
        Array<std::string> arr2(2);
        arr2[0] = "Hello";
        std::cout << arr2[1] << std::endl;
        std::cout << arr2[0] << std::endl;
    }
      catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    catch (const char * e) {
        std::cerr << e << std::endl;
    }

    try {
        Array<char> arr2(3);
        arr2[0] = '!';
        arr2[1] = 'I';
        arr2[2] = 'H';
        std::cout << arr2[2];
        std::cout << arr2[1];
        std::cout << arr2[0] << std::endl;
        std::cout << arr2[3] << std::endl;
    }
      catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    catch (const char * e) {
        std::cerr << e << std::endl;
    }
    return 0;
}