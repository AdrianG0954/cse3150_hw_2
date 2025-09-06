#include <string.h>
#include "greeting_utils.h"
#include <iostream>

int main() {
    std::string fullName;
    std::getline(std::cin, fullName);

    std::string greeting = GreetingUtils::create_message(fullName);
    char* c_formatted = GreetingUtils::format_as_c_string(greeting);
    std::cout << c_formatted << std::endl;

    delete[] c_formatted;
    return 0;
}
