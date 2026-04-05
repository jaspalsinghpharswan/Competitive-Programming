#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int h, a; // health or attacks ;
    cin >> h >> a;
    int attack = (h + a -1)/a ;
    cout<< attack  ;
    return 0;
}