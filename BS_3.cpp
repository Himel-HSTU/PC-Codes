#include <bits/stdc++.h>
using namespace std;
#define ll long long

// First and Last Occurrences in Array Using Lower and Upper Bound
void func(int ar[], int n, int k) {
    // lower_bound returns pointer, so subtract ar to get index
    int lb = lower_bound(ar, ar + n, k) - ar;
    //cout << "Lower bound index: " << lb << endl;

    int ub = upper_bound(ar, ar + n, k) - ar;
    //cout << "Upper bound index: " << ub << endl;

    if (lb == n || ar[lb] != k) {
        cout << -1 << " " << -1 << "\n";
    } else {
        cout << lb << " " << ub - 1 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int ar[] = {1, 3, 5, 6, 7, 7, 7, 7, 9, 11};
    int k = 7;
    func(ar, 10, k);

    return 0;
}
