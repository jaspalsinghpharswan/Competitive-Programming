// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     char op;
//     cin >> a >> op >> b; // Input: digit, character, digit
//     if(op == 'x' || op == 'X') {
//         cout << (a * b);
//     } else {
//         cout << "Invalid operator";
//     }
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s; // Input like "9x9" or "3X8"
    int a = s[0] - '0'; // Convert first character to integer
    char op = s[1];     // Operator is the second character
    int b = s[2] - '0'; // Convert third character to integer

    if(op == 'x' || op == 'X') {
        cout << (a * b);
    } else {
        cout << "Invalid operator";
    }
    return 0;
}