#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // total balls
    vector<int> balls(n);
    
    // Input balls ke colors
    for (int i = 0; i < n; i++) {
        cin >> balls[i];
    }
    
    // Assume colors 1 to 4 hain
    vector<int> count(5, 0); // index 0 unused
    
    // Step 1: Count frequency of each color
    for (int i = 0; i < n; i++) {
        count[balls[i]]++;
    }
    
    // Step 2: Calculate total operations
    int operations = 0;
    for (int color = 1; color <= 4; color++) {
        operations += count[color] / 2; // integer division
    }
    
    cout << operations << endl;
    return 0;
}
