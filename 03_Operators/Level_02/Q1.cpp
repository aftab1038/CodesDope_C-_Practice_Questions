// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q1. Write a program to calculate the sum of the first and the second last digit of a 5 digit. E.g.- NUMBER : 12345 OUTPUT : 1+4=5 */

#include <iostream>

using namespace std;

int main()
{
    // number
    int number =91935;
    cout<<"Number : "<<number<<endl;
    
    // first digit
    int firstDigit = number/10000; 
    
    // Eliminating last digit;
    number = number/10;

    // second last digit
    int forthDigit = number%10;

    // calculate the sum of the first and the second last digit of a 5 digit
    int sum = forthDigit + firstDigit;

    // printing out sum
    cout<<"Sum of first and second last digit  of number : "<<sum<<endl;

    return 0;
}