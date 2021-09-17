// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Sept 2021
// This program asks the user to pick a number between 0-9

#include <iostream>

int main() {
    // this function checks if the user picked 5
    const int ANSWER = 5;

    int number;

    // input
    std::cout << "Guess a number between 0-9: ";
    std::cin >> number;
    std::cout << std::endl;

    // process & output
    if (number != 5) {
        std::cout << "You guessed incorrectly.";
    } else {
        std::cout << "You guessed right!";
    }

    std::cout << "" << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
