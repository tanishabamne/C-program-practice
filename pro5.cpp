#include<iostream>
using namespace std;
int main()
{              //WAP to find simple interest.
    int principle,rate,time;
    cout<<"Enter principle:\n";
    cin>>principle;
    cout<<"Enter rate:\n";
    cin>>rate;
    cout<<"Enter time:\n";
    cin>>time;
    cout<<"simple interest =   "<<(principle*rate*time)/100;

}
