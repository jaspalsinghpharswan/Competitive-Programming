#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    // Insert x after the k-th element (1-based index)
    a.insert(a.begin() + k, x);
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}