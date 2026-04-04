#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 9 == 1 && n %10 )
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" ;
    }
    return 0;
}