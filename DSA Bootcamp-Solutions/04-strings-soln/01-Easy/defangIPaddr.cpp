#include <bits/stdc++.h>
using namespace std;

string defangIPaddr(string &address)
{
    string str = "";
    for (int i = 0; i < address.length(); i++)
    {
        if (address[i] == '.')
        {
            str += '[';
            str += '.';
            str += ']';
        }
        else
            str += address[i];
    }
    return str;
}


int main()
{
    string address = "1.1.1.1";
    cout<<defangIPaddr(address);
}