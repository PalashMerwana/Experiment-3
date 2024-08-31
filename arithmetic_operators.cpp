//Palash Merwana 
//Prn: 23070123095
//experiment 3: opertators 

#include<iostream>
using namespace std;

int main()
{
    int a,b,sum, sub, mult, div, modulus, incr, decr ; 
    cout<<"enter a value of a: ";
    cin>> a;
    cout<<"enter a value of b: ";
    cin>> b;
    sum = a+b; 
    sub = a-b;
    mult = a*b;
    div = a/b;
    modulus = a%b; 
    cout<< "sum is: "<<sum<<endl; 
    cout<< "subtraction is: "<<sub<<endl;
    cout<< "multiplication is: " << mult<<endl;
    cout<< "division is : "<<div<<endl;
    cout<< "modulus is : "<<modulus<<endl;
    cout<< "increment is: "<<++a<<endl;
    cout<< "decrement is : "<<--b<<endl;

    return 0;
}