// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q1. Length and breadth of a rectangle are 5 and 7 respectively. Write a program to calculate the area and perimeter of the rectangle. */

#include <iostream>

using namespace std;

int main()
{
    // variables 
    int length = 5;
    int breadth = 7;

    // area and perimeter of rectangle
    int area = length*breadth;
    int perimeter = (2*length)+(2*breadth);

    // printing out area and rectangle
    cout<<"Area of Rectangle : "<<area<<endl;
    cout<<"perimeter of Rectangle : "<<perimeter<<endl;

    return 0;
}