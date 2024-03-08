// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Q4. Take two integer inputs from user. First calculate the sum of two then product of two. Finally, print the sum and product of both obtained results.*/

#include <iostream>

using namespace std;

int main()
{
    int x, y, sum, prod;        

    // taking input from user
    cout<<"Enter integer 1 : ";
    cin>>x;
    cout<<"Enter integer 2 : ";
    cin>>y;

    // storing the sum and product in variables
    sum = x+y;
    prod = x*y;

    // printing the sum and product
    cout<<"Sum : "<<sum<<endl;
    cout<<"Product : "<<prod<<endl;
    
    return 0;
} 
