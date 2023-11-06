//
// Created by Lautaro Cavichia on 06/11/23.
//

#ifndef PASSWORDGENERATOR_RANDOMGENERATOR_H
#define PASSWORDGENERATOR_RANDOMGENERATOR_H

#include <iostream>
#include <string>
#include <cstdlib> // for rand() and srand()
#include <ctime>

class RandomGenerator {
public:
    std::string generatePassword(int length = 16, bool upperCase = true, bool lowerCase =true, bool numbers =true , bool symbols =true);

private:
    std::string fullAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}|:<>?~";
    std::string lowerCaseAlphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string upperCaseAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string numbersAlphabet = "0123456789";
    std::string symbolsAlphabet = "!@#$%^&*()_+{}|:<>?~";
};


#endif //PASSWORDGENERATOR_RANDOMGENERATOR_H
