// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q5. Enter two numbers from keyboard. Write a program to check if the two numbers are equal.*/

#include <iostream>


using namespace std;

int main()
{      
    // input values
    int num1, num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;

    // Checking
    if (num1 == num2)
    {
        cout<<"Equal Number!"<<endl;
    }
    
    else 
    {
        cout<<"Not equal!"<<endl;
    }
    
    return 0;
}