#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid < end && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        else if (mid > start && nums[mid] < nums[mid - 1])
        {
            return mid - 1;
        }
        else if (nums[mid] == nums[start] && nums[mid] == nums[end])
        {
            if (start < nums.size() - 1 && nums[start] > nums[start + 1])
            {
                return start;
            }
            start++;
            if (end > 0 && nums[end] < nums[end - 1])
            {
                return end - 1;
            }
            end--;
        }
        else if (nums[start] < nums[mid] || (nums[start] == nums[mid] && nums[mid] > nums[end]))
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int findMin(vector<int> &nums)
{
    int pivotI = findPivot(nums);

    if (pivotI == -1)
    {
        return nums[0];
    }

    return nums[pivotI + 1];
}

int main()
{
    vector<int> nums = {2, 2, 2, 0, 1};
    cout << findMin(nums);
}