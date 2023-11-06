#include <iostream>
#include "RandomGenerator.h"

int main() {
    RandomGenerator randomGenerator;
    std::cout << randomGenerator.generatePassword()<< std::endl;
    return 0;

}
