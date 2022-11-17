// Copyright (c) 2022 Marshall Demars
//
// Created by: Marshall Demars
// Created on: Nov 2022
// This program adds positive number using loops

#include <iostream>

int main() {
    // This program adds positive number using loops

    int numberAsInteger;
    int userAsInteger;
    int counter;
    int addInt = 0;
    int sum;
    std::string numberASString;
    std::string userAsString;

    // Input, Process and Output
    std::cout << "How many positive numbers do you want to add?: ";
    std::cin >> numberASString;
    std::cout << "" << std::endl;
    try {
        numberAsInteger = std::stoi(numberASString);
        if (numberAsInteger > 0) {
            for (counter = 0; counter < numberAsInteger; counter++) {
                std::cout << "Enter a number to add: ";
                std::cin >> userAsString;
                userAsInteger = std::stoi(userAsString);
                if (userAsInteger < 0) {
                    continue;
                }
                addInt = addInt + userAsInteger;
                sum = addInt;
            }
            std::cout << "\nSum of all positive integers is " << sum
                      << std::endl;
        } else {
            std::cout << "\nPlease input a positive integer." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid input, try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
