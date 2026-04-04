#include <iostream>
using namespace std ;
int main (){
    int x , y ; // x = stairs ,y = floor ;
    cin>> x >> y ;
    if ( (y > x && y - x <= 2)||( y < x && x - y <= 3)){
        
            cout<< "Yes" <<endl ;
        }else {
                cout<< "No"<<endl ;
        }   
        
    }
    
