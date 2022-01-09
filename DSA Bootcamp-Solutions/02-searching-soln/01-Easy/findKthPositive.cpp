#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &arr, int k)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int diff = arr[mid] - (mid + 1);

        if (diff == k)
        {
            if (mid > 0 && ((arr[mid - 1] - mid)) == k)
            {
                end = mid - 1;
                continue;
            }
            return arr[mid] - 1;
        }
        if (diff < k)
        {
            start = mid + 1;
        }
        else if (diff > k)
        {
            end = mid - 1;
        }
    }
    if (end < 0)
    {
        return k;
    }
    int less = arr[end] - (end + 1);
    k -= less;
    return arr[end] + k;
}

int main()
{
    vector<int> arr = {2,3,4,7,11}; 
    int k = 5;

    cout<<findKthPositive(arr, k);
    
}