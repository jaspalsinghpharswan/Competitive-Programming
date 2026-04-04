// #include <iostream>
// using namespace std;
// int cubeRoot (int b ){
//     int ans= 0 ;
//     while (ans * ans * ans <= b ){
//         ans ++ ;
//     } 
//     return -1 ;
// }

// int main()
// {
//     int b;
//     cin >> b;
 
//   cout << cubeRoot(b) << endl;
// }



#include <iostream>
using namespace std;

typedef long long ll;

ll power(ll a, ll b, ll limit) {
    ll res = 1;
    for (ll i = 0; i < b; ++i) {
        if (res > limit / a) return limit + 1; // avoid overflow
        res *= a;
    }
    return res;
}

int main() {
    ll B;
    cin >> B;
    for (ll A = 1; A <= 60; ++A) {
        ll val = power(A, A, B);
        if (val == B) {
            cout << A << endl;
            return 0;
        }
        if (val > B) break;
    }
    cout << -1 << endl;
    return 0;
}

