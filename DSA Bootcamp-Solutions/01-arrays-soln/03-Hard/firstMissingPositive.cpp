#include <bits/stdc++.h>
using namespace std;

vector<int> cyclicSort(vector<int> &nums)
{
    int i = 0;
    while (i < nums.size())
    {
        if (nums[i] > 0 && nums[i] < nums.size() && (nums[i] != nums[nums[i] - 1]))
        {
            // int correct = nums[i]-1;
            swap(nums[i], nums[nums[i] - 1]);
        }
        else
        {
            i++;
        }
    }
    return nums;
}
int firstMissingPositive(vector<int> &nums)
{
    vector<int> res = cyclicSort(nums);

    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] != i + 1)
        {
            return i + 1;
        }
    }
    return res.size() + 1;
}

int main()
{
    vector<int> nums = {1, 2, 0};
    cout << firstMissingPositive(nums);
}