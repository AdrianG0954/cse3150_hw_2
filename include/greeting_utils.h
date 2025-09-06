#pragma once
#include <string>

namespace GreetingUtils {
    // returns a greeting message for the given name (e.g., "Hello, John!")
    std::string create_message(const std::string& name);

    // formats the given message as a C-style string (null-terminated char array)
    char* format_as_c_string(const std::string& msg);
}
