#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int count = 0, element;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
            element = nums[i];
        if (element == nums[i])
        {
            count++;
        }
        else
            count--;
    }
    return element;
}

int main()
{
    vector<int> nums = {3, 2, 3};
    cout << majorityElement(nums);
}