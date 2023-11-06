#include "RandomGenerator.h"

std::string RandomGenerator::generatePassword(int length, bool upperCase, bool lowerCase, bool numbers, bool symbols) {
    srand(time(0));
    std::string password;

    std::string charSet = "";

    if (upperCase) charSet += upperCaseAlphabet;
    if (lowerCase) charSet += lowerCaseAlphabet;
    if (numbers) charSet += numbersAlphabet;
    if (symbols) charSet += symbolsAlphabet;

    for (int i = 0; i < length; i++) {
        password += charSet[rand() % charSet.length()];
    }

    return password;
}
