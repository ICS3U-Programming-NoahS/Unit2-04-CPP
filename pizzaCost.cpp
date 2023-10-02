// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date:  Sept. 27th, 2023
// This program asks the user for the diameter of
// the pizza in cm. It then calculates and displays
// the total cost of the pizza.
#include <iomanip>
#include <iostream>

int main() {
    // Declare constants
    const float hst = 0.13;
    const float labourCost = 2.00;
    const float rentalCost = 2.25;
    const float ingredCost = 1.5;

    // Declare variables
    float diameter, subtotal, tax, total;

    // Get the diameter
    std::cout << "Enter the diameter (cm): ";
    std::cin >> diameter;

    // Calculate the subtotal, tax and total cost
    subtotal = labourCost + rentalCost + (ingredCost * diameter);
    tax = hst * subtotal;
    total = subtotal + tax;

    // Display the total cost back to the user
    std::cout << "";
    std::cout << "The total cost is: $"
    << std::fixed << std::setprecision(2)
    << std::setfill('0') << total << std::endl;
}
