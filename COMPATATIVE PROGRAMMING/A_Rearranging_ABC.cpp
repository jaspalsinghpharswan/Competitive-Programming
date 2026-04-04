#include <iostream>
#include <string>
using namespace std ;
int main (){
    string s ;
    cin>> s ;
    
    if   (  s=="ABC"&& s=="BAC"&&  s=="CAB"&& s=="BCA"&& s=="ACB"&& s=="CBA"){
        cout<< "Yes" ;
    }else  
    {
        cout<< "No" ;
    }
    return  0 ;

}