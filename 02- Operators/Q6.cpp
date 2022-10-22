// Create a basic calculator

#include <iostream>
using namespace std;
int main()
{
    int num,num1;
    cout<<"Enter 1st number: ";
    cin>>num;
    cout<<"Enter 2nd number: ";
    cin>>num1;

    cout<<"Sum of "<<num<<" and "<<num1<<" is "<<num+num1<<"\n";
    cout<<"Difference of "<<num<<" and "<<num1<<" is "<<num-num1<<"\n";
    cout<<"Product of "<<num<<" and "<<num1<<" is "<<num*num1<<"\n";
    cout<<"Quotient of "<<num<<" and "<<num1<<" is "<<num/num1<<"\n";
    cout<<"Remainder of "<<num<<" and "<<num1<<" is "<<num%num1<<"\n";
return 0;
}