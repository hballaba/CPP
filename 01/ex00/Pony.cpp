#include "Pony.hpp"

Pony::Pony(std::string names)
{
    age = 10;
    power = 50;
    color = "white";
    hight = 25;
    name = names;

    std::cout << std::endl << GREEN "Pony " << name << " is born " DEFAULT << std::endl;
    std::cout << "I am " << age << " years ago" << std::endl;
    std::cout << "My power is " << power << " y.e." << std::endl;
    std::cout << "My color is " << color << std::endl;
    std::cout << "My hight is " << hight << " inch" << std::endl << std::endl;
}
Pony::~Pony()
{
     std::cout << RED"Pony " << name << " is died " DEFAULT<< std::endl;
}
int Pony::eats(Pony *heap)
{
    std::cout << heap->name << " ate grass" << std::endl;
    heap->power = heap->power + 5;
    std::cout << heap->name << " power is " << heap->power <<  " y.e." << std::endl;
    heap->hight = heap->hight + 2;
    std::cout << heap->name << " hight is " << heap->hight <<  " inch" << std::endl;
    return (0);
}