#include <iostream>
using namespace std;
int main()
{
     
    int x, y, z ; // x = grams pf beef  .   yen is doneted by  y ; . z is cheapert than  takahasi ;
    cin >> x >> y >> z;
    int maxPrice = (y *z -1) /x ;
    cout<< maxPrice <<endl; 

    return 0;
}
