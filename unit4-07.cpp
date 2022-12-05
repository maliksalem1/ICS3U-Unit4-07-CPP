// Copyright (c) 2022 maliksalem1
//
// Created by: maliksalem1
// Created on: Oct 2022
// This program uses loops in if statements
//  and vice versa

#include <iostream>

int main() {
    // This function lists every number from 1000 to 2000

    int counter = 1000;

    // Process and Output

    for (counter = 1000; counter <= 2000; counter++) {
        if (counter % 5 == 4)
            std::cout << counter << "\n";
        else
            std::cout << counter << " ";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
