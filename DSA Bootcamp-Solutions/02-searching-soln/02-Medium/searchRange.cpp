#include <bits/stdc++.h>
using namespace std;

int util(vector<int> &nums, int target, bool findFirst)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid, ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            if (findFirst)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return ans;
}
vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> res = {-1, -1};

    res[0] = util(nums, target, true);
    if (res[0] != -1)
    {
        res[1] = util(nums, target, false);
    }

    return res;
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> ans = searchRange(nums, target);

    for(int i = 0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}