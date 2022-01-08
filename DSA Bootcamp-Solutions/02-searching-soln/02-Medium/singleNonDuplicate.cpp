#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{

    if (nums.size() == 1)
    {
        return nums[0];
    }
    int start = 0;
    int end = nums.size() - 1;
    int ans = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid == nums.size() - 1 && nums[mid] != nums[mid - 1])
        {
            return nums[mid];
        }
        else if (mid == 0 && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }

        else if (mid > 0 && mid < nums.size() - 1 && nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }

        else if (mid > 0 && nums[mid] == nums[mid - 1])
        {
            int numOfElements = mid - start + 1;
            if (numOfElements % 2 == 0)
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }

        else if (mid < nums.size() - 1 && nums[mid] == nums[mid + 1])
        {
            int numOfElements = mid + 1 - start + 1;
            if (numOfElements % 2 == 0)
            {
                start = mid + 2;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << singleNonDuplicate(nums);
}