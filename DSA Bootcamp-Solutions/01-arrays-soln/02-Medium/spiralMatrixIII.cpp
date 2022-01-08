#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart)
{

    vector<vector<int>> res = {{rStart, cStart}};

    vector<vector<int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    int len = 0, d = 0;

    while (res.size() < rows * cols)
    {

        if (d == 0 || d == 2)
            len++;

        for (int i = 0; i < len; i++)
        {
            rStart += dir[d][0];
            cStart += dir[d][1];
            if (rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols)
            {
                res.push_back({rStart, cStart});
            }
        }
        d = (d + 1) % 4;
    }
    return res;
}

int main()
{
    int rows = 5, cols = 6, rStart = 1, cStart = 7;
    vector<vector<int>> ans = spiralMatrixIII(rows, cols, rStart, cStart);

    for(int i = 0; i<ans.size(); i++)
    {
        cout<<"[";
        for(int j = 0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"]";
    }
}