#include <iostream>
using namespace std ;
int main (){
    int a , b ,  c ;
    cin>> a >> b>> c ;
    if ( a == c  ){
        cout<< b ;
    } else if ( a == b){
        cout<< c ;
    } else if (  b == c ){
        cout<< a ;
    }
    return 0 ;
}