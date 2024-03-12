// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q2. Take a 4 digit number. Write a program to display a number whose digits are 2 greater than the corresponding digits of the number TAKEN. For example, if the number which was taken is 5696, then the displayed number should be 7818. */

#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter 4 digit number : ";
    cin>>number;
    
    int num1 = (number / 1000)+2;
    number = number % 1000;
    int num2 = (number / 100)+2;
    number = number % 100;
    int num3 = number / 10;
    int num4 = number % 10;


cout<<"Num 1 : "<<num1<<endl;
cout<<"Num 2 : "<<num2<<endl;
cout<<"Num 3 : "<<num3<<endl;
cout<<"Num 4 : "<<num4<<endl;
    return 0;
}