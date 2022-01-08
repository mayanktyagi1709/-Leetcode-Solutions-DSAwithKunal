#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid < end && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (mid > start && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        else if (arr[start] >= arr[mid])
        {
            end = mid - 1;
        }
        else if (arr[start] < arr[mid])
        {
            start = mid + 1;
        }
    }
    return -1;
}

int binarySearch(vector<int> &arr, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > target)
        {
            end = mid - 1;
        }

        else if (arr[mid] < target)
        {
            start = mid + 1;
        }

        else
        {
            return mid;
        }
    }
    return -1;
}

int search(vector<int> &arr, int target)
{

    int pivotIndex = findPivot(arr);

    if (pivotIndex == -1)
    {
        return binarySearch(arr, target, 0, arr.size() - 1);
    }

    if (arr[pivotIndex] == target)
    {
        return pivotIndex;
    }

    if (target >= arr[0])
    {
        return binarySearch(arr, target, 0, pivotIndex - 1);
    }

    return binarySearch(arr, target, pivotIndex + 1, arr.size() - 1);
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout<<search(nums, target);
}