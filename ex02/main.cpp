#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10
int main(int argc, char *argv[])
{
    std::cout << "\033[1;32mCreating an empty array\033[0m" << std::endl;
    Array<int> Test;
    std::cout << std::endl << "\033[1;32mCreating an array with content\033[0m" << std::endl;
    Array<int> Test2(MAX_VAL);
    std::cout << "Size of array (test2) : " << Test2.getSize() << std::endl;
    std::cout << std::endl << "\033[1;33mTrying to modify element of the array at index -2\033[0m" << std::endl;
    try
    {
        Test2[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Result --> " << e.what() << std::endl;
    }
    std::cout << "\033[1;33mTrying to modify element of the array at max + 1\033[0m" << std::endl;
    try
    {
        Test2[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Result --> " << e.what() << std::endl;
    }
    std::cout << std::endl << "\033[1;33mChanging all values with random values\033[1;34m" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        Test2[i] = rand();
        std::cout << "Test2[" << i << "] : " << Test2[i] << std::endl;
    }
    std::cout << "\033[m" << std::endl;
    std::cout << "\033[1;33mTrying to access an unexisting value \033[0m" << std::endl;
    try
    {
        std::cout << Test2[2] << std::endl;
        std::cout << Test2[4] << std::endl;
        std::cout << Test2[6] << std::endl;
        std::cout << Test2[12] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Result --> " << e.what() << std::endl;
    }
    std::cout << std::endl;
    return 0;
}