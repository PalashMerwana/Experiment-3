//Palash Merwana 
//Prn: 23070123095
//experiment 3: opertators 

#include<iostream>
using namespace std;

int main()
{
    int a,b; 

    cout<<"enter a value of a: ";
    cin>>a;
    cout<<"enter a value of b: ";
    cin>>b;

    if (a==b)
    {
        cout<<"a is equal to b"<<endl; 
    }
    else
    {
        cout<<"a is not equal to b"<<endl; 
    }

    if (a!=b)
    {
        if(a>b)
        {
            cout<<"a is greater than b"<<endl;
        }
        else
        {
            cout<<"a is less than b"<<endl;
        }
    }
        
    
    return 0;
}