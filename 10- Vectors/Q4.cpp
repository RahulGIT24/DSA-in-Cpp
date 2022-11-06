// Check if a given vector is sorted or not

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5);

    for (int i = 0; i < v.size(); i++)
    {
        cout << "Enter " << i + 1 << " element" << endl;
        cin >> v[i];
    }

    int result = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < v[i + 1])
        {
            result++;
        }
    }

    if (result == v.size()-1)
    {
        cout << "Yes vector is in ascending order";
    }
    else
    {
        cout << "No vector is not in ascending order";
    }

    return 0;
}