#include "Pony.hpp"

void    ponyOnTheHeap(void)
{
    Pony *heap = new Pony("Heap");
        
    heap->eats(heap);
    delete heap;
}

void     ponyOnTheStack()
{
    Pony stack = Pony("Stack");
    stack.eats(&stack);
    return ;
}

int     main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}
