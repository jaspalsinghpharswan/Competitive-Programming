#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n;

    if (s.front () == s.back())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No";
    }
}