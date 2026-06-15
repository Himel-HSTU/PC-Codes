#include<bits/stdc++.h>
using namespace std;
#define ll long long
int minimum_insertions(const string& S) {
    int insertions = 0;
    
    // Iterate through the string S
    for (int i = 0; i < S.size(); i++) {
        // Check for mismatches at odd positions
        if (i % 2 == 0 && S[i] != 'i') {
            insertions++;
        }
        // Check for mismatches at even positions
        else if (i % 2 == 1 && S[i] != 'o') {
            insertions++;
        }
    }
    
    return insertions;
}

int main() {
    string S;
    cin >> S;  // Input the string
    
    cout << minimum_insertions(S) << endl;  // Output the result
    
    return 0;
}