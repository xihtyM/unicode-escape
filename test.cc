#include "unicode_escape.hh"
#include <iostream>

int main(void)
{
    std::cout << (escape_string("Hello, World!\\u1234\\xa\\n"));

    return 0;
}
