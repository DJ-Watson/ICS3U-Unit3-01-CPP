// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: September 2019
// This program adds two numbers together
// with user input


#include <iostream>


int main() {
    // variables
    int number1;
    int number2;
    int answer;
    // input
    std::cout << "type first number (integer): ";
    std::cin >> number1;
    std::cout << "type second number (integer): ";
    std::cin >> number2;
    // process
    answer = number1 + number2;
    // output
    std::cout << number1 << " + " << number2 << " = " << answer << std::endl;
}
