// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q4. Now, solve the above question using assignment operators (eg. +=, -=, *=).*/

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
    number += 8;    // Adding 8
    number /= 3;    // Dividing it by 3
    number %= 5;    // Modulus of it with 5
    number *= 5;    // Multiply resultant by 5

    // Display the result
    cout<<"Result : "<<number<<endl;

    return 0;
}