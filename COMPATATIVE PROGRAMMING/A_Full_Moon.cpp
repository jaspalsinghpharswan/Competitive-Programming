#include <bits/stdc++.h>
using namespace std ;
int main (){
    int n , m , p ; 
    cin>> n>> m >> p ;

    int fullMoon = 0 ;

    while (m<= n ){
        fullMoon++ ;
        m = m + p ;

    }
    cout<< fullMoon <<endl ;

    
}