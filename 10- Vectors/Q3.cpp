// Count the number of elements strictly greater than value x

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
        if (v[i] > x)
        {
            occ++;
        }
    }

    cout << occ;
    return 0;
}