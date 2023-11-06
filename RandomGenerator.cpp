//
// Created by Lautaro Cavichia on 06/11/23.
//

#include "RandomGenerator.h"

std::string RandomGenerator::generatePassword(int length, bool upperCase, bool lowerCase, bool numbers, bool symbols) {
    srand(time(0));
    if (upperCase && lowerCase && numbers && symbols) {
        std::string password;
        for (int i = 0; i < length; i++) {
            password += fullAlphabet[rand() % fullAlphabet.length()];
        }
        return password;
    } else if (upperCase && lowerCase && numbers) {
        std::string password;
        for (int i = 0; i < length; i++) {
            password += lowerCaseAlphabet[rand() % lowerCaseAlphabet.length()];
        }
        return password;
    } else if (upperCase && lowerCase && symbols) {
        std::string password;
        for (int i = 0; i < length; i++) {
            password += upperCaseAlphabet[rand() % upperCaseAlphabet.length()];
        }
        return password;
    } else if (upperCase && numbers && symbols) {
        std::string password;
        for (int i = 0; i < length; i++) {
            password += numbersAlphabet[rand() % numbersAlphabet.length()];
        }
        return password;
    } else if (lowerCase && numbers && symbols) {
        std::string password;
        for (int i = 0; i < length; i++) {
            password += symbolsAlphabet[rand() % symbolsAlphabet.length()];
        }
        return password;
    } else if (upperCase && lowerCase) {
        std::string password;
        for (int i = 0; i < length; i++) {
            int random = rand() % 2;
            if (random == 0) {
                password += lowerCaseAlphabet[rand() % lowerCaseAlphabet.length()];
            } else {
                password += upperCaseAlphabet[rand() % upperCaseAlphabet.length()];
            }
        }
        return password;
    } else if (upperCase && numbers) {
        std::string password;
        for (int i = 0; i < length; i++) {
            int random = rand() % 2;
            if (random == 0) {
                password += numbersAlphabet[rand() % numbersAlphabet.length()];
            } else {
                password += upperCaseAlphabet[rand() % upperCaseAlphabet.length()];
            }
        }

    }
    return std::string();
}
