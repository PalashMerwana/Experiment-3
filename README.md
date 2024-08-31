# Experiment-3
# Aim
To study and implement Operators in C++
# Software Used
VS Code
# Theory
these are basically symbols that operate on operands.

there are five types of operators in c++ which is also used in the codes

arithmetic operator (+,-,*,/,%,++,--). these are the basic mathematical operators
assigment operator(=,+=,-=,*=,/=). these are used to assign value
comparision operator (==,<=,>=,!=). these are relational operators
logical operator (&&,||,!). these are to combine conditional statements
# Arithmatic Operators
~~~
#include using namespace std;

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
~~~
![image](https://github.com/user-attachments/assets/a3cc8bee-b567-4e69-8e38-127be01dec48)
# Assignment Operators
~~~
#include using namespace std;

int main()

{

int a=3,b=4,c=5,d=9,e=10 ;
a+=3;
cout << "the value of a is: "<<a <<endl;
b-=5;
cout<<"the value of b is: "<< b <<endl;
c*=5;
cout << "the value of c is: "<< c <<endl; 
d/=9;
cout<< "the value of d is: "<< d<< endl;
e%=9;
cout<< " the value of e is: "<< e<< endl;
return 0;
}

~~~
![image](https://github.com/user-attachments/assets/cc93c29b-e372-44e4-a0f1-55a951e0b5f2)
# Comparison Operators
~~~
#include using namespace std;

int main() { int a,b;

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
~~~
  ![image](https://github.com/user-attachments/assets/76f9f4c3-17b9-44f2-bd2d-ae2673dd0d1a)

# Logical Operators
~~~
#include using namespace std;

int main() {

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
~~~
![image](https://github.com/user-attachments/assets/f1e6b60a-e53f-46b7-b1eb-ed4056266fc9)
