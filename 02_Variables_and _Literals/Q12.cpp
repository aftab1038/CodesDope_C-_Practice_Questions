// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q12. Take value of length and breath of a rectangle from user as float. Find its area and print it on screen after type casting it to int. */

#include <iostream>

using namespace std;

int main()
{ 
    // variable declaring 
    float length;
    float breath;
    int area;

    // Take value of length and breath of a rectangle from user as float
    cout<<"Enter the length of Rectangle\t: ";
    cin>>length;
    cout<<"Enter the breath of Rectangle\t: ";
    cin>>breath;

    // calculating area and type-casting it to int
    area = int(length*breath);

    // printing out the area 
    cout<<"Area of Rectangle\t: "<<area<<endl;

    return 0;
}