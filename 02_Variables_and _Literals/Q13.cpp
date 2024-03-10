// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q13. Take a char input from user and print it's ASCII value. */

#include <iostream>

using namespace std;

int main()
{ 
    // variable Declaring 
    char character;
    int value;

    // taking character from user
    cout<<"Enter a character to find it's ASCII value : ";
    cin>>character;

    // character to its ASCII Value
    value = character;

    // printing out the ASCII value of inputed value
    cout<<"The ASCII value of \""<<character<<"\" : "<<value<<endl;    
    
    return 0;
}