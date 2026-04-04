#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long m, a, b, c;

        cin >> m >> a >> b >> c;

        int row1 = min(a, m);
        int row2 = min(b, m);
        int remaining = 2 * m - (row1 + row2);
        int  extra = (c, remaining);

        cout << row1 + row2 + extra << endl;
    }

    return 0;
}
