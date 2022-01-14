#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> res;
    unordered_map<string, vector<string>> mp;

    for (auto s : strs)
    {
        string curr = s;
        sort(curr.begin(), curr.end());
        mp[curr].push_back(s);
    }

    for (auto i : mp)
        res.push_back(i.second);

    return res;
}

int main()
{
    vector<string> nums = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> ans = groupAnagrams(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "]";
    }
}