#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &nums, int target)
{
    int n = nums.size();
    int i = 0, j = n - 1;
    while (i + 1 < j)
    {
        int k = (i + j) / 2;
        if (nums[k] >= nums[i])
        {
            if (nums[k] == nums[i])
            {
                for (int l = i; l <= k; l++)
                    if (nums[l] == target)
                        return true;
                i = k + 1;
            }
            else if (target >= nums[i] && target <= nums[k])
                j = k;
            else
                i = k + 1;
        }
        else if (nums[k] <= nums[j])
        {
            if (nums[k] == nums[j])
            {
                for (int l = k; l <= j; l++)
                    if (nums[l] == target)
                        return true;

                j = k - 1;
            }
            else if (target >= nums[k] && target <= nums[j])
                i = k;
            else
                j = k - 1;
        }
    }
    if (nums[i] == target || nums[j] == target)
        return true;
    else
        return false;
}

int main()
{
    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 0;
    cout<<search(nums, target);
}