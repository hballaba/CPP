#include <iostream>
#include <string>

struct Data { 
std::string s1; 
int         n; 
std::string s2; };

void    * serialize(void) {
    std::string arr_char = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	Data *data = new Data;

    std::srand(std::time(NULL));
    for (int i = 0; i < 8; i++) {
        int random = std::rand() % 62;
		data->s1 += arr_char[random];
    }
	data->n = std::rand() % 100000000;
    for (int i = 0; i < 8; i++) {
        int random = std::rand() % 62;
		data->s2 += arr_char[random];
    }
    // std::cout << data->s1 << std::endl;
    // std::cout << data->n << std::endl;  
    // std::cout << data->s2 << std::endl;  
    return (static_cast<void*>(data));
}

Data    * deserialize(void * raw) {
    return static_cast<Data*>(raw);
}


int     main() {
    void *ptr = serialize();
	Data *ptr1 = static_cast<Data*>(ptr);
	std::cout << ptr1->s1 << std::endl;
	std::cout << ptr1->n << std::endl;
	std::cout << ptr1->s2 << std::endl << std::endl;

	Data *ptr2 = deserialize(ptr);
	std::cout << ptr2->s1 << std::endl;
	std::cout << ptr2->n << std::endl;
	std::cout << ptr2->s2 << std::endl;
	std::cout << "size = " << sizeof(ptr2->s1) + sizeof(ptr2->n) + sizeof(ptr2->s1) << std::endl;

    return 0;
}


