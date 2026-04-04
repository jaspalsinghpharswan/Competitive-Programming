#include <iostream>
using namespace std ;
int main (){
    int a , b ;
    cin>> a >> b ;
     int coin = max (a + b , max (a + (a - 1),  b + (b-1))) ;
     cout<< coin ;
    return 0 ;
    
} 
