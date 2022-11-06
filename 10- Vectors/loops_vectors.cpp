#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;

    // for loop
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+2,6);

    // For each loop
    for (int element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    v.erase(v.end()-2);

    // while loop
    int i =0;
    while (i<v.size())
    {
        cout<<v[i]<<" ";
        i++;
    }
    cout<<endl;


return 0;
}