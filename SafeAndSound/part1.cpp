#include "part1.h"
#include <iostream>

// Safe string copy – prevents overflow
char* string_copy(char* dest, unsigned int destsize, const char* src)
{
    if (destsize == 0)
        return dest;

    unsigned int i = 0;

    // Copy only until destsize-1 to leave space for null terminator
    for (; i < destsize - 1 && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    dest[i] = '\0'; // Always null-terminate
    return dest;
}

void part1()
{
    char password[] = "secret";
    char dest[12];
    char src[] = "hello world!";

    string_copy(dest, sizeof(dest), src);

    std::cout << src << std::endl;
    std::cout << dest << std::endl;
}
