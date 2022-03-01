// Copyright 2022 MTHS
// Author: Andrew Ten-Den
// This program calculates the area and perimeter of a rectangle
//    with user input

#include <iostream>

int main() {
    // this function calculates area and perimeter
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "Enter length of the rectangle (cm): ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle (cm): ";
    std::cin >> width;

    // process
    area = length*width;
    perimeter = 2*(length+width);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " cm²." << std::endl;
    std::cout << "Perimeter is " << perimeter << " cm." << std::endl;

    std::cout << "\nDone." << std::endl;
}
