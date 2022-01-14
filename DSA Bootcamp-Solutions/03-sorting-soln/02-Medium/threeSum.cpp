#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> res;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < (int)nums.size() - 2; i++)
    {
        if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
        {
            int j = i + 1, k = nums.size() - 1;
            while (j < k)
            {
                int temp = nums[i] + nums[j] + nums[k];
                if (temp == 0)
                {
                    res.push_back({nums[i], nums[j], nums[k]});

                    while (j < k && nums[j] == nums[j + 1])
                        j++;
                    while (j < k && nums[k] == nums[k - 1])
                        k--;

                    j++;
                    k--;
                }
                else if (temp < 0)
                    j++;
                else
                    k--;
            }
        }
    }

    return res;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = threeSum(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<"[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout<<"]";
    }
}