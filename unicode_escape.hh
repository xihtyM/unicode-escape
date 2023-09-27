#pragma once

#include <exception>
#include <string>
#include <unordered_map>

extern std::unordered_map<char, int> hex_to_int;

class StringEscapeError : public std::exception
{
  public:
    StringEscapeError(const char *err) noexcept : error(err) {}

    const char *what()
    {
        return error;
    }

  private:
    const char *error;
};

std::string escape_string(
    const std::string &str);

std::string unescape_string(
    const std::string &str);
