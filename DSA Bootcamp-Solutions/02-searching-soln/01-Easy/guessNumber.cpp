#include <bits/stdc++.h>
using namespace std;

int guessNumber(int n)
{

    int start = 1;
    int end = n;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // guess is an API, provided by Leetcode
        int res = guess(mid);
        if (res == 1)
        {
            start = mid + 1;
        }
        else if (res == -1)
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int n = 10, pick = 6;
    cout<<guessNumber(n);
}