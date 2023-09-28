#pragma once

#include <exception>
#include <string>
#include <unordered_map>

extern std::unordered_map<char, int> hex_to_int;

class StringEscapeError : public std::exception
{
  public:
    StringEscapeError(const char *err) noexcept : error(err) {}

    const char *what() const noexcept override
    {
        return error;
    }

  private:
    const char *error;
};


/// @brief Escape special characters in a string.
/// @param str The input string.
/// @return The escaped string (e.g. turns '\\\\\\n' into '\\n').
/// @throws StringEscapeError if an error occurs during escaping.
std::string escape_string(
    const std::string_view &str);

/// @brief Unescape special characters in a string.
/// @param str The input string.
/// @return The unescaped string (e.g. turns '\\n' into '\\\\\\n').
/// @throws StringEscapeError if an error occurs during unescaping.
std::string unescape_string(
    const std::string_view &str);
