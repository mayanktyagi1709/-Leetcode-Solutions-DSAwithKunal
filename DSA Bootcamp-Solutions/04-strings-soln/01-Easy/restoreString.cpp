#include <bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int> &indices)
{
    string temp = s;
    for (int i = 0; i < indices.size(); i++)
    {
        temp[indices[i]] = s[i];
    }
    return temp;
}

int main()
{
    string s = "codeleet";
    vector<int> indices = {4,5,6,7,0,2,1,3};

    cout<< restoreString(s, indices);

}