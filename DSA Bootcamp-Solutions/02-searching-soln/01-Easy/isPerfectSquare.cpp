#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num)
{
    int start = 2;
    int end = num - 1;

    bool ans = false;

    if (num == 1)
    {
        ans = true;
    }

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        float div = float(num) / mid;
        if (div > mid)
        {
            start = mid + 1;
        }
        else if (div < mid)
        {
            end = mid - 1;
        }
        else
        {
            ans = true;
            break;
        }
    }
    return ans;
}

int main()
{
    int num = 16;
    cout<<isPerfectSquare(num);
}