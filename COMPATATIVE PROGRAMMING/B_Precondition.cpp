// BRUTE FORCE  APPROACH ;
// #include <iostream>
// // #include <string>

// using namespace std;

// int main()
// {
//     string S, T;
//     cin >> S >> T;

//     for (int i = 1; i < S.size(); ++i)
//     {
//         if (isupper(S[i]))
//         {
//             char prevChar = S[i - 1];
//             // check if prevChar is in T
//             if (T.find(prevChar) == string::npos)
//             {
//                 cout << "No" << endl;
//                 return 0;
//             }
//         }
//     }

//     cout << "Yes" << endl;
//     return 0;
// }
 
 //  OPTIMIZIED CODE ;
 # include <iostream>
 #include <unordered_set>
 #include <cctype>
 using namespace std ;
 int main (){ 
    string S, T ; 
    cin>> S >> T ;

    unordered_set<char> allowed(T.begin(), T.end());

    for (int i = 1; i < S.size(); ++i) {
        if (isupper(S[i])) {
            if (allowed.count(S[i - 1]) == 0) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
 
