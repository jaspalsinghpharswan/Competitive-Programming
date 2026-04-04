#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int a;
    cin >> a;

    int sum = 0;
    // Odd positions: index 1, 3, 5, ...
    for (int i = 0 ; i < n; i += 2)
    {
        if (i % 2 == 1 ){
        sum += n ;
}
        }
        
    

    cout << sum << endl;
    return 0;
}