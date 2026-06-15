#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

// Function to find the smallest prime >= n
int nextPrime(int n) {
    while (!isPrime(n)) {
        ++n;
    }
    return n;
}

// Function to compute the output based on input
int computeOutput(int input) {
    int ceilLog = ceil(log2(input));
    return nextPrime(ceilLog);
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int input;
        cin >> input;
        int output = computeOutput(input);
        cout << output << endl;
    }

    return 0;
}
