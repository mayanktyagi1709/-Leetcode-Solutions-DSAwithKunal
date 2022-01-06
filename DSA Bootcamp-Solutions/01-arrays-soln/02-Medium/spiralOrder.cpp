#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    int rowStart = 0, rowEnd = m - 1;
    int colStart = 0, colEnd = n - 1;
    vector<int> res;

    while (rowStart <= rowEnd and colStart <= colEnd and res.size() < m * n)
    {
        for (int j = colStart; j <= colEnd and res.size() < m * n; j++)
        {
            res.emplace_back(matrix[rowStart][j]);
        }
        rowStart++;

        for (int i = rowStart; i <= rowEnd and res.size() < m * n; i++)
        {
            res.emplace_back(matrix[i][colEnd]);
        }
        colEnd--;

        for (int j = colEnd; j >= colStart and res.size() < m * n; j--)
        {
            res.emplace_back(matrix[rowEnd][j]);
        }
        rowEnd--;

        for (int i = rowEnd; i >= rowStart and res.size() < m * n; i--)
        {
            res.emplace_back(matrix[i][colStart]);
        }
        colStart++;
    }

    return res;
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> ans = spiralOrder(matrix);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}