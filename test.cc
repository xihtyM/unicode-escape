#include "unicode_escape.hh"
#include <iostream>

int main(void)
{
    std::cout << (escape_string(std::string_view("Hello, World!\\u1234\\xa\\n")));

    return 0;
}
