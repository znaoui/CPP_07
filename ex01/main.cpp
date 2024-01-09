#include "iter.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void    ft_putchar(const char &c)
{
    write(1, &c, 1);
}

int main(void)
{
    char test[65] = "This is a string test. If all is good, you can see my message. \n";
    iter(test, strlen(test), &ft_putchar);
    char test2[15] = "Welcome here!\n";
    iter(test2, strlen(test2), &ft_putchar);
    return (0);
}