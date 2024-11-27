#include<iostream>
using namespace std;
int main()
{          // WAP to swap 2 numbers without using 3rd variable.
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a ="<<a<<"b="<<b<<endl;
}

