#include "whatever.hpp"

int main(void)
{
    int a = 1405;
    int b = 42;
    std::cout << "==========================" << std::endl;
    std::cout << "=    \033[1;32mBEFORE INT SWAP\033[m    =" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of b: " << b << std::endl;
    ::swap(a, b);
    std::cout << "==========================" << std::endl;
    std::cout << "=    \033[1;32mAFTER INT SWAP\033[m    =" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of b: " << b << std::endl;
    std::cout << "Min value: " << ::min(a, b) << std::endl;
    std::cout << "Max value: " << ::max(a, b) << std::endl;

    std::cout << std::endl;
    std::string s1 = "Bonjour tout le monde!";
    std::string s2 = "Au revoir tout le monde !";
    std::cout << "==========================" << std::endl;
    std::cout << "=   \033[1;32mBEFORE STRING SWAP\033[m   =" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << "Value of s1: " << s1 << std::endl;
    std::cout << "Value of s2: " << s2 << std::endl;
    ::swap(s1, s2);
    std::cout << "==========================" << std::endl;
    std::cout << "=   \033[1;32mAFTER STRING SWAP\033[m    =" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << "Value of s1: " << s1 << std::endl;
    std::cout << "Value of s2: " << s2 << std::endl;
    std::cout << "Min value: " << ::min(s1, s2) << std::endl;
    std::cout << "Max value: " << ::max(s1, s2) << std::endl;
}