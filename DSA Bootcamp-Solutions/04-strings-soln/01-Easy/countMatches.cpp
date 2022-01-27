#include <bits/stdc++.h>
using namespace std;

int countMatches(vector<vector<string>> &items, string k, string v)
{
    int x = -1;
    if (k == "type")
        x = 0;
    else if (k == "color")
    {
        x = 1;
    }
    else
    {
        x = 2;
    };
    int count = 0;
    for (auto c : items)
    {
        if (c[x] == v)
            count++;
    }
    return count;
}

int main()
{
    vector<vector<string>> items = {{"phone","blue","pixel"},{"computer","silver","lenovo"},{"phone","gold","iphone"}};
    string ruleKey = "color", ruleValue = "silver";
    cout << countMatches(items, ruleKey, ruleValue);
}