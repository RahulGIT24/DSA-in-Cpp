// ​There is a man going on a trek. The trek consists of n + 1 points at different altitudes. The man starts his trek on point 0 with altitude equal 0. You are given an integer array height of length n where height[i] is the net height in altitude between points i​ and i + 1 for all (0 <= i < n). Return the highest altitude of a point

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {-4, 1, 6, 0, -8};
    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, arr[i]);
    }

    cout<<ans;
    return 0;
}