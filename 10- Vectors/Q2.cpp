// Count the number of occurance of a particular element x

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

    int x;
    cout << "Enter x: ";
    cin >> x;

    int occ = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (x == v[i])
        {
            occ++;
        }
    }
    cout << occ;
    return 0;
}