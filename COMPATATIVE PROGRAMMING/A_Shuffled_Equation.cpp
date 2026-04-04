#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int result = 1;
    for(int i = 2; i <= n; i++)
        result *= i;
    return result;
}

// Function to calculate permutation P(n, r)
int permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;
    cout << "Permutation P(" << n << ", " << r << ") = " << permutation(n, r) << endl;
    return 0;
}