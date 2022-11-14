// Given an array of integers of size n. Answer q queries where you need to print the sum of values in a given range of indices from l to r

#include <iostream>
using namespace std;
int main()
{
    int l,r,n=6;
    cout<<"Enter 1st query: ";
    cin>>l;
    cout<<"Enter 2nd query: ";
    cin>>r;

    int arr[n] = {23,1,2,34,56,2};

    int sum = 0;

    for (int i = l-1; i < r; i++)
    {
        sum+= arr[i];
    }
    cout<<sum;
return 0;
}