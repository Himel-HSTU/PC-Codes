#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Function to check if a substring s[i..j] is a palindrome
bool func(const string &s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string s;
    // Taking input string
    cin >> s;
    int i = 0, j = s.size() - 1;
    // Checking if the entire string is a palindrome
    if (func(s, i, j)) 
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
