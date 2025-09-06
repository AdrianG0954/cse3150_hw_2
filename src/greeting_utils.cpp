#include <string.h>
#include "greeting_utils.h"

namespace GreetingUtils {
    std::string create_message(const std::string& name) {
        return "Hello, " + name + "!";
    }

    char* format_as_c_string(const std::string& msg) {
        char* c_str = new char[msg.size() + 1];
        for (int i = 0; i < msg.size(); i++) {
            c_str[i] = msg[i];
        }
        c_str[msg.size()] = '\0';
        return c_str;
    }
}
