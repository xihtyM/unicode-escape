# unicode-escape

Tries to provide a simple way of turning strings from:
`"\\x41 lovely day\\n"` to `"A lovely day\n"` and back.

Uses two functions:
`escape_string` and `unescape_string`.

For example:
```cc
std::cout << escape_string("Hello, World!\\n");
// outputs "Hello World!\n"

std::cout << unescape_string("Hello, World!\n");
// outputs "Hello, World!\\n"
```

The only possible exception is thrown if incorrect syntax is used e.g. `\\` at the end of a string cannot be escaped properly, or `\\u` must have 4 hex characters afterwards.
