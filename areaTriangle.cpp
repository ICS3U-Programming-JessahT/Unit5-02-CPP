// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 16/12/2022
// This program ask the user for the base and height of a triangle
// and uses a function to calculate the area

#include<iostream>


// function for area of a triangle
void areaTriangle(float base, float height) {
// initialize variable
    float area;
// calculate area
    area = (base * height) / 2;
// display area to user
    std::cout << "The area of the triangle is "
    << area << "cm^2" << std::endl;
}
// main function
int main() {
// initialize variables
    std::string userStringBase, userStringHeight;
    float userBase, userHeight;
// get base and height from user
    std::cout << "Enter the base of the triangle (cm): ";
    std::cin >> userStringBase;
    std::cout << "Enter the height of the triangle (cm): ";
    std::cin >> userStringHeight;
// check if user entered for any strings
    try {
        userBase = std::stof(userStringBase);
        userHeight = std::stof(userStringHeight);
// check if user entered a negative number
        if (userBase > 0 && userHeight > 0) {  // if all valid call function
            areaTriangle(userBase, userHeight);
        } else {  // display when a negative numbers is added
            std::cout << "Invalid, no negative numbers"
            << "only positive numbers or decimals" << std::endl;
        }
    } catch (std::invalid_argument) {  // display when a string is added
        std::cout << "Invalid, no strings only positive numbers or decimals"
        <<std::endl;
    }
}
