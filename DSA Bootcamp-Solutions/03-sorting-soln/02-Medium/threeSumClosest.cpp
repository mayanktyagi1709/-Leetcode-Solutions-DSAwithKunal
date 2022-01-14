#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> nums, int target)
{
    sort(nums.begin(), nums.end());
    int size = nums.size();
    long closest = INT_MAX;
    for (int i = 0; i < size - 2; i++)
    {
        int l = i + 1, r = size - 1;
        while (l < r)
        {
            long sum = nums[i] + nums[l] + nums[r];
            if (abs(target - sum) < abs(target - closest))
                closest = sum;

            if (sum < target)
                l++;
            else
                r--;
        }
    }
    return closest;
}

int main()
{
    vector<int> nums = {-1,2,1,-4}; 
    int target = 1;
    cout << threeSumClosest(nums, target);
}