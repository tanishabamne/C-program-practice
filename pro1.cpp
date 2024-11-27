#include<iostream>
using namespace std;
int main()
{                   //  WAP to swap 2 numbers by  using third variables.
    int num1,num2,test;
    cout<<"Enter any number"<<endl;
    cin>>num1;
    cout<<"Enter any number"<<endl;
    cin>>num2;
    cout<<"Before swapping \n";
    cout<<num1<<" ,"<<num2<<endl;
    test=num2;
    num2=num1;
    num1=test;
    cout<<"after swapping"<<endl;
    cout<<num1<<" , "<<num2;
}
