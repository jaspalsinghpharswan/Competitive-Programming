#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin>> n ;
    if (n == 1000 ){
        cout<< 0 ;
    }else if ( n > 1000){
        cout<< n - 1000  ;
    } else {
        cout<<0 ;
    }
}