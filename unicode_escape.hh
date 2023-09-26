#pragma once

#include <exception>
#include <string>
#include <map>

extern std::map<const char, int> hex_to_int;

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
