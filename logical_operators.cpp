//Palash Merwana 
//Prn: 23070123095
//experiment 3: opertators 

#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d, e;
    cout<<"enter the value of a";
    cin>>a; 

    cout<<"enter the value of b";
    cin>>b; 

    c= (a<5 && b<10);
    cout<<"LOGICAL AND: the output: "<< c <<endl; 

    d= (a>4 || b<6);
    cout<< "LOGICAL OR: the output: "<< d<< endl;

    e= !(a>6 && b<5);
    cout<< "LOGICAL NOT: the output: "<< e<<endl;

    return 0;
}