// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q5. Write a program to take input of length and breadth of a rectangle from the user and print its area */

#include <iostream>

using namespace std;

int main()
{
    int length, breadth, area;

    // taking input from user
    cout<<"Enter the Length of Rectangle : ";
    cin>>length;
    cout<<"Enter the Breadth of Rectangle : ";
    cin>>breadth;

    // calculating the area
    area = length*breadth;

    // printing the area
    cout<<"Area of Rectangle : "<<area<<endl;

    return 0;
} 
