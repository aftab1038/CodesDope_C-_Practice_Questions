// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q3. Write a program to calculate the sum of the digits of a 3-digit number. Number : 132 Output : 6 */

#include <iostream>

using namespace std;

int main()
{
    // Getting input from user
    int number;
    cout<<"Enter 3-digit number : ";
    cin>>number;

    // Separating digits
    int digit1 = number/100;    // Separating 1st digit (hundred place digit)
        number %= 100;          // Removing 1st digit (hundred place digit)
    int digit2 = number/10;     // Separating 2st digit (tens digit)
    int digit3 = number%10;     // Separating 3st digit (Ones place digit)
    
    // Calculating sum of each digit
    int sum = digit1 + digit2 + digit3;
    
    // Printing sum
    cout<<"Sum : "<<sum<<endl;

    return 0;
}