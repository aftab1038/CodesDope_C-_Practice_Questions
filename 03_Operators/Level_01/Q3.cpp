// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q3.  Write a program to enter a 4 digit number from the keyboard. Add 8 to the number and then divide it by 3. Now, the modulus of that number is taken with 5 and then multiply the resultant value by 5. Display the final result. */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
    // taking input from user
    int number;
    cout<<"Enter a 4-digit Number : ";
    cin>>number;
    
    // Operation on inputed number
    number = number + 8;    // Adding 8
    number = number / 3;    // Dividing it by 3
    number = number % 5;    // Modulus of it with 5
    number = number * 5;    // Multiply resultant by 5

    // Display the result
    cout<<"Result : "<<number<<endl;

    return 0;
}