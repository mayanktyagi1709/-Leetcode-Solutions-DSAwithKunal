#include <bits/stdc++.h>
using namespace std;

int firstBadVersion(int n)
{
    int start = 1;
    int end = n;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        //The API isBadVersion is defined for you.
        if (!isBadVersion(mid))
        {
            start = mid + 1;
        }

        // if mid is a bad version...
        else
        {
            // 1. if the previous element
            // before mid is not bad
            // then the mid is the first bad version
            if (!isBadVersion(mid - 1))
            {
                return mid;
            }
            // 2. if the previous element
            //  before mid is bad, this means
            //  that the mid is not the first bad version
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n = 5, bad = 4;
    cout<<firstBadVersion(n);
}