#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> matrix)
{
    bool isCol = false;
    int R = matrix.size();
    int C = matrix[0].size();

    for (int i = 0; i < R; i++)
    {
        if (matrix[i][0] == 0)
        {
            isCol = true;
        }

        for (int j = 1; j < C; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }

    for (int i = 1; i < R; i++)
    {
        for (int j = 1; j < C; j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < C; j++)
        {
            matrix[0][j] = 0;
        }
    }

    if (isCol)
    {
        for (int i = 0; i < R; i++)
        {
            matrix[i][0] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    
    setZeroes(matrix);

    for (int i = 0; i < matrix.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "]";
    }
}