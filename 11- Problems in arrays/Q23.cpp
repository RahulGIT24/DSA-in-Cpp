//* Insert An Element Desired or Specific Position In An Array

#include <iostream>
using namespace std;
int main()
{
    // Declaring Array
    int array[10] = {2, 3, 4, 5, 6, 7, 12, 6, 90, 67};

    int ask, pos; // Creating variables

    // Taking number input from user
    cout << "Enter a number " << endl;
    cin >> ask;

    // Taking position input from user
    cout << "Enter the position where you want to insert " << ask << " " << endl;
    cin>>pos;

    // Printing original array
    cout<<"Original Array"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    // Updating array by adding number to the specific position entered by user
    array[pos-1]=ask;

    cout<<"Updated Array"<<endl;

    //Printing Updated array
    for (int i = 0; i < 11; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}