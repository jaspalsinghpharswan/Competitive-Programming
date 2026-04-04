#include <iostream>
using namespace std;
int main (){
    int n ;
   
    int a , b ;
    cin>>a >> b ; // 0 -9 ; any number of btw 0 -9 which is not equals to a + b ;
    if ( a + b < 9 ){
        cout<< 9 -(a +b) ;
    }else if (a == b < 9){
        cout<< 9 - (a == b) ;
    } else if ( a - b > 9)  {
        cout<< 9- b ;
    }
    return 0 ;
}