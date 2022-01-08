#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{
    int ans = 1;
    if (x == 0 || x == 1)
        return x;

    for (int i = 2; i < x; i++)
    {
        if (((i - 1) <= x / (i - 1)) && (i > (x / i)))
        {
            ans = i - 1;
            break;
        }
    }
    return ans;
}

int main()
{
    int x = 4;
    cout << mySqrt(x);
}