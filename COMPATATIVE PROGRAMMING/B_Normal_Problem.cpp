#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char mirrorChar(char c) {
    if (c == 'p') return 'q';
    if (c == 'q') return 'p';
    return 'w'; // 'w' remains the same
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;

        reverse(a.begin(), a.end()); // Step 1: Reverse the string

        // Step 2: Convert using mirror logic
        for (char &c : a) {
            c = mirrorChar(c);
        }

        cout << a << endl;
    }
    return 0;
}
