// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q2. Take a 4 digit number. Write a program to display a number whose digits are 2 greater than the corresponding digits of the number TAKEN. For example, if the number which was taken is 5696, then the displayed number should be 7818. */

#include <iostream>

using namespace std;

int main()
{
    // Getting 4 digit number from user
    int number;
    cout<<"Enter 4 digit number : ";
    cin>>number;
    
    // Breaking into each digit
    int num1 = (number / 1000);
    number = number % 1000;
    int num2 = (number / 100);
    number = number % 100;
    int num3 = number / 10;
    int num4 = number % 10;

    // Adding 2 to each digit
    num1 += 2;
    num2 += 2;
    num3 += 2;
    num4 += 2;
    
    // If any digit increase by 10 then do consider unit digit
    if (num1 >= 10 && num2 >= 10 && num3 >= 10 && num4 >= 10)
    {
        num1 = num1 % 10;
        num2 = num2 % 10;
        num3 = num3 % 10;
        num4 = num4 % 10;
    }

    // Printing the number after adding 2 to each digit
    cout<<"New number : "<<num1<<num2<<num3<<num4<<endl;
    
    return 0;
}