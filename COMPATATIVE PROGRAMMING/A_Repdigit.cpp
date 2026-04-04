// #include <iostream>
// using namespace std  ;
// int main ()
// {
//     int n ;
//     cin>> n ;

//     if (  n % 111 == 0){
//         cout<< "Yes" <<endl;
//     }else {
//         cout<< "No" <<endl ;
//     }
// }
 
#include <bits/stdc++.h>
using namespace std ;
int main (){
    int n ; cin>> n ;
    string s = to_string (n) ;

    if (s[0] == s[1] && s [1]== s[2]){
        cout<< "Yes"<<endl ;
    }else {
        cout<< "No"<<endl ;
    }
}