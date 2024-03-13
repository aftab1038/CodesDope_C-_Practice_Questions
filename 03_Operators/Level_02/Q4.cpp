// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q4. Write a program to reverse a 3-digit number. E.g.- Number : 132 Output : 231. */

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

    /*  
        One way is to print each digit, like:
        cout<<"Reversed Number : "<<digit3<<digit2<<digit1<<endl;
    */ 

    // Another way : combining each digit to form single number
    int rNumber = digit3 * 100;
        rNumber += (digit2 *10);
        rNumber += digit1;

    // Printing the revered number
    cout<<"Revered Number : "<<rNumber<<endl;

    return 0;
}