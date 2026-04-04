#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d; // a is number of hours minutes is doneted b ; it si the deadline to  submmit a repor ;c and d there it is a before the deadline ;
    int deadline = a * 60 + b ;
    int submit = c * 60 + d ;
    if (submit < deadline)
    cout << "Yes";
    else
    cout << "No";
    }
