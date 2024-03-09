// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q9. Write a program to add 3 to the ASCII value of the character 'd' and print the equivalent character. */

#include <iostream>

using namespace std;

int main()
{
    // declaring character
    char chr = 'd';

    // converting d to its ASCII value 
    int value = int(chr);

    // adding 3 to the ASSCII code of d
    int value1 = value + 3;

    // printing out
    cout<<"Given Character : "<<chr<<endl; 
    cout<<"Equivalent character after adding 3 to ASSCII value of d : "<<char(value1)<<endl;

    
    return 0;
}