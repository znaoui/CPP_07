#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, size_t size, void (*func)(const T &))
{
    size_t i;

    i = 0;
    while (i < size)
    {
        func(array[i]);
        i++;
    }
    return ;
}
#endif