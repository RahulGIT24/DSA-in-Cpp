//* Insert An Element Desired or Specific Position In An Array

#include <iostream>
using namespace std;
int main()
{
    int array[10] = {2, 3, 4, 5, 6, 7, 12, 6, 90, 67};
    int ask, pos;
    cout << "Enter a number " << endl;
    cin >> ask;
    cout << "Enter the position where you want to insert" << ask << " " << endl;
    cin>>pos;

    cout<<"Original Array"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"Updated Array"<<endl;

    array[pos-1]=ask;

    for (int i = 0; i < 11; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}