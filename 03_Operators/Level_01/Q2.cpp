// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q2. Write a program to input the value of the radius of a circle from keyboard and then calculate its perimeter and area. */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
    // variable declaration
    const float pi = 3.14;
    float radius, area, perimeter;

    // taking input from user (radius)
    cout<<"Enter the radius of Circle : ";
    cin>>radius;

    // calculating area and perimeter
    area = pi*pow(radius, 2);
    perimeter = 2*pi*radius;

    // Printing out area and perimeter
    cout<<"Area of Circle : "<<area<<endl;
    cout<<"Circumference(perimeter) of Circle : "<<perimeter<<endl;

    return 0;
}