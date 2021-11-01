// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Oct 2021
// This program uses while loop

#include <iostream>

int main() {
    // this function uses while loop
    int number_as_integer;
    std::string number;
    int loopCounter = 1;
    int total = 1;

    // input
        std::cout << "Enter a positive integer: ";
        std::cin >> number;
        std::cout << "" << std::endl;

    // process
    try {
        number_as_integer = std::stoi(number);
        if (number_as_integer < 0) {
            std::cout << "You entered a negative integer, try again."
                        << std::endl;
        } else {
            do {
            loopCounter = loopCounter + 1;
            total = total * loopCounter;
            } while (loopCounter < number_as_integer);
            // output
            std::cout << number << "! = " << total << std::endl;
        }
    }

    catch (std::invalid_argument) {
    std::cout << number << " is an invalid input, try again."
                << std::endl;
    }
    std::cout << "\nDone." << std::endl;
    }
