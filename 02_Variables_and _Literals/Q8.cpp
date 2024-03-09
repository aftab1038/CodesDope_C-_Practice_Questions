// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q8. Write a program to assign a value of 100.235 to a double variable and then convert it to int. */

#include <iostream>

using namespace std;

int main()
{
    // assigning value to double variable 
    double num = 100.235;

    // converting double into int
    int num1 = int(num);
    
    // printing out
    cout<<"Double number : "<<num<<endl;
    cout<<"Converted to int : "<<num1<<endl;
    
    return 0;
}