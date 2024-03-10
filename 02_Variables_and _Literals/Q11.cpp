// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q11. Write a program to find the square of the number 3.9. */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
    // variable declaring 
    int num;
    int square;
    
    // taking number from user
    cout<<"Enter a number : ";
    cin>>num;

    // finding square of inputed number
    square = pow(num, 2);

    // printing out the square
    cout<<"Square : "<<square<<endl;

    return 0;
}