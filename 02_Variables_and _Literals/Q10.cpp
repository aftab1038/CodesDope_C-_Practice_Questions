// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q10. Write a program to add an integer variable having value 5 and a double variable having value 6.2. */

#include <iostream>

using namespace std;

int main()
{
    // variable declaring
    int num = 5;
    double num1 = 6.3;

    // adding integer to double
    double sum = num1 + double(num);

    // printing 
    cout<<"Integer\t : "<<num<<endl;
    cout<<"Double\t : "<<num1<<endl;
    cout<<"Sum\t : "<<sum<<endl;
    
    return 0;
}