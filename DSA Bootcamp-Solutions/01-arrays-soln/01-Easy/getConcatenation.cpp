#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int> &nums)
{
    int len = nums.size();
    vector<int> ans(2 * len);
    for (int i = 0; i < nums.size(); i++)
    {
        ans[i] = nums[i];
        ans[i + len] = nums[i];
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 1};
    vector<int> ans = getConcatenation(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}