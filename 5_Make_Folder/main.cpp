#include <iostream>          // Lets us use cout and cin for input and output
#include "Triangle.h"        // Lets us use the Triangle class

using namespace std;         // So we don't have to write std:: in front of cout and cin

int main() {                 // Start of the main function, where the program begins

    Triangle triangle1;      // Create a Triangle object to store the first triangle
    Triangle triangle2;      // Create a Triangle object to store the second triangle

    double baseInput;        // This will temporarily hold the base value from the user
    double heightInput;      // This will temporarily hold the height value from the user

    // ---- Read base and height for the first triangle ----
    cin >> baseInput >> heightInput;    // Read two numbers: base and height for triangle1
    triangle1.SetBase(baseInput);       // Store the base value inside triangle1
    triangle1.SetHeight(heightInput);   // Store the height value inside triangle1

    // ---- Read base and height for the second triangle ----
    cin >> baseInput >> heightInput;    // Read two numbers: base and height for triangle2
    triangle2.SetBase(baseInput);       // Store the base value inside triangle2
    triangle2.SetHeight(heightInput);   // Store the height value inside triangle2

    // ---- Compute the area of each triangle ----
    double area1 = triangle1.GetArea(); // Ask triangle1 to calculate and give back its area
    double area2 = triangle2.GetArea(); // Ask triangle2 to calculate and give back its area

    // ---- Output the triangle with the smaller area ----
    cout << "Triangle with smaller area:\n";  // Print a heading line before the triangle info

    if (area1 < area2) {          // Check if triangle1 has a smaller area than triangle2
        triangle1.PrintInfo();    // If so, print triangle1's base, height, and area
    }
    else {                        // Otherwise, triangle2 is smaller or they are equal
        triangle2.PrintInfo();    // Print triangle2's base, height, and area
    }

    return 0;                     // End the program and tell the system everything went fine
}
