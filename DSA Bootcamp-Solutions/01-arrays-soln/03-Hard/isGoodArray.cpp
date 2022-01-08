#include <bits/stdc++.h>
using namespace std;

bool isGoodArray(vector<int> &nums)
{
    if (nums.size() == 1 and nums[0] == 1)
        return true;
    int gcd = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (i == 0)
            gcd = nums[i];
        else
        {
            gcd = __gcd(gcd, nums[i]);
            if (gcd == 1)
                return true;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {12,5,7,23};
    cout<<isGoodArray(nums);
}