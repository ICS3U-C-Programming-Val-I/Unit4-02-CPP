// Copyright (c) 2023 Val I All rights reserved.
//
// Created by: Val
// Created on: Nov 9, 2023
// This program asks the user to enter a positive number.
// It then uses a while true loop to multiply all the whole numbers
// starting from 1, until that number and display the factorial to the user.

#include <iostream>
#include <string>

int main() {
    std::string userNumStr;
    int userNumInt;
    float userNumFlt;
    int factorial = 1;
    int counter = 0;

    std::cout << "Enter a number: \n";
    std::cin >> userNumStr;

    try {
        userNumInt = std::stoi(userNumStr);
        userNumFlt = std::stof(userNumStr);

        if (userNumFlt != userNumInt) {
            std::cout << "Invalid input\n";
        } else {
            if (userNumInt < 0) {
                std::cout << "Enter a positive number\n";
            } else {
                do {
                    counter = counter + 1;
                    factorial = factorial * counter;
                } while (counter < userNumInt);
                std::cout<< userNumInt << "! = " << factorial;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << userNumStr << " is not a number\n";
    }
}
