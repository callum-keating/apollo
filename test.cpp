#include "libs/apollo/apollo.h"

int main() {
    apollo::clearTerm();
    apollo::addTerm("hello");
    std::cin.ignore();
    return 0;
}