#include <bits/stdc++.h>
using namespace std;

vector<int> cyclicSort(vector<int> &nums)
{
    int i = 0;
    while (i < nums.size())
    {
        if (i == nums[i] || nums[i] == nums.size())
        {
            i++;
        }
        else
        {
            swap(nums[i], nums[nums[i]]);
        }
    }

    return nums;
}

int missingNumber(vector<int> &nums)
{
    vector<int> res = cyclicSort(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != i)
        {
            return i;
        }
    }
    return nums.size();
}

int main()
{
    vector<int> nums = {3,0,1};
    cout << missingNumber(nums);
}