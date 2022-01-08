#include <bits/stdc++.h>
using namespace std;

int findMaxValueOfEquation(vector<vector<int>> &points, int k)
{
    int ans = INT_MIN;
    int n = points.size();
    priority_queue<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        while ((!p.empty()) && (points[i][0] - p.top().second > k))
            p.pop();
        if (!p.empty())
        {
            ans = max(ans, p.top().first + points[i][0] + points[i][1]);
        }
        p.push({points[i][1] - points[i][0], points[i][0]});
    }
    return ans;
}

int main()
{
    vector<vector<int>> points = {{1,3},{2,0},{5,10},{6,-10}};
    int k = 1;

    cout<<findMaxValueOfEquation(points, k);
}