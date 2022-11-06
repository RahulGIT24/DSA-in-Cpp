// Find the last occurance of an element x in a given array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v(6);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<"Enter "<<i+1<<" element"<<endl;
        cin>>v[i];
    }

    cout<<"Enter x"<<endl;
    int x;
    cin>>x;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i]==x)
        {
            cout<<i;
            break;
        }
    }

return 0;
}