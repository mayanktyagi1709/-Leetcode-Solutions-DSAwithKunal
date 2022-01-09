#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int start = 0;
    int end = numbers.size() - 1;
    vector<int> ans;

    while (start < end)
    {
        int sum = numbers[start] + numbers[end];
        if (sum > target)
        {
            end--;
        }
        else if (sum < target)
        {
            start++;
        }
        else
        {
            ans.push_back(start + 1);
            ans.push_back(end + 1);
            break;
        }
    }
    return ans;
}

int main()
{
    vector<int> numbers = {2,7,11,15};
    int target = 9;

    vector<int> ans = twoSum(numbers, target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}