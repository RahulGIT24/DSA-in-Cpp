// Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == x. Where k is an integer given by the user.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums;
    int triplets = 0;
    int targetSum = 3;

    nums.push_back(3);
    nums.push_back(-1);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(5);

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                if (nums[i] + nums[j] + nums[k] == targetSum)
                {
                    triplets++;
                }
            }
        }
    }
    cout << triplets;
    return 0;
}