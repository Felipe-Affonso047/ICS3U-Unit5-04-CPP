// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: May 2021
// This program calculates the volume of a cylinder

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

float cylinderVolume(int height, int radius) {
    // this function calculates the volume of a cylinder
    float volume;

    volume = height * radius * 2 * M_PI;

    return volume;
}


int main() {
    // This is the main function
    int height;
    int radius;
    float result;
    try {
        std::cout <<
        "This program calculates the volume of a cylinder.\n"
        << std::endl;

        std::cout << "Enter height in cm: ";
        std::cin >> height;
        std::cout << "Enter radius in cm: ";
        std::cin >> radius;

        result = cylinderVolume(height, radius);

        std::cout <<
        "\nThe cylinder volume is: " << result << "cm²"
        << std::endl;
    } catch (std::invalid_argument) {
        std::cout <<
        "\nThis input is invalid, please, insert a number."
        << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
