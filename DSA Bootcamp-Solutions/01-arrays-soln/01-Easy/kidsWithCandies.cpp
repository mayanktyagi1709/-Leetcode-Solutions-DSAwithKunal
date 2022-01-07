#include <bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    int maxi = 0;
    vector<bool> ans;
    for (int i = 0; i < candies.size(); i++)
    {
        if (candies[i] > maxi)
            maxi = candies[i];
    }
    for (int i = 0; i < candies.size(); i++)
    {
        if (candies[i] + extraCandies >= maxi)
        {
            ans.push_back(true);
        }
        else
        {
            ans.push_back(false);
        }
    }
    return ans;
}

int main()
{
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;

    vector<bool> ans = kidsWithCandies(candies, extraCandies);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}