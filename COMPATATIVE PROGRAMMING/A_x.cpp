#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b;
  cin >> a >> b;
  int sum = a + b;
  int diff = a - b;
  int prod = a * b;
  int  result = max (sum ,max(diff , prod ))  ;
  cout << result ;

  return 0;
}