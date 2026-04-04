// #include <bits/stdc++.h>
// using namespace std ;
// int main (){
//     int n ;cin>> n ;

//     cout << (1<<n)-2*n << "\n";
//     return 0 ;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//   int n;
//   cin >> n;
//   int a=1,b=2,p=n;
//   while(p>0){
//     if(p%2==1){ a*=b; }
//     b*=b;
//     p/=2;
//   }
//   cout << a-2*n << "\n";
//   return 0;
// }


#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  cout << pow(2,n)-2*n << "\n";
  return 0;
}
