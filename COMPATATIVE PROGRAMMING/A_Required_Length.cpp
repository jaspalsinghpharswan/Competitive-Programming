#include <iostream>
using namespace std;
int main()
{
    string p;
    cin >> p;
    int l;
    cin >> l;
    
        if (p.length () >= l && p.length() > l || p.length()== l )
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    
}