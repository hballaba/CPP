#ifndef ITER_HPP

# define ITER_HPP

# include <iostream>
# include <string>


template <typename T>
void    iter(T const *array, int const & i, void (*p)(T const & arr)) {
    for (int num = 0; num < i; num++)
        p(array[num]);
}

#endif