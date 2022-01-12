#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    if (nums.empty())
    {
        return false;
    }

    sort(nums.begin(), nums.end());
    int i = 0;
    int j = i + 1;

    while (j < nums.size())
    {
        if (nums[i] != nums[j])
        {
            i++;
            j++;
        }
        else
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    cout << containsDuplicate(nums);
}