#include "unicode_escape.hh"
#include <iostream>

int main(void)
{
    std::cout << (escape_string("Hello, World!\\x41"));

    return 0;
}
