// Find the difference between the sum of elements at even indices to the sum of elements at odd indices

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(6);

    for (int i = 0; i < v.size(); i++)
    {
        cout << "Enter " << i + 1 << " element" << endl;
        cin >> v[i];
    }

    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            evenSum = evenSum + v[i];
        }
        else if (v[i] % 2 != 0)
        {
            oddSum = oddSum + v[i];
        }
    }

    cout << "Answer is: " << evenSum - oddSum;
    return 0;
}