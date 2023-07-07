#include <iostream>
#include "session.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::string item = session::create();
    session::hello(item);
    return 0;
}
