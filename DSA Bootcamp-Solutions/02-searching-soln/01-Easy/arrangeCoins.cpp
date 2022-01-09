#include <bits/stdc++.h>
using namespace std;

int arrangeCoins(int n)
{
    return (int)(sqrt(2 * (long)n + 0.25) - 0.5);
}

int main()
{
    int n = 5;
    cout<< arrangeCoins(n);
}