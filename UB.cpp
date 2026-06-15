#include <bits/stdc++.h>
using namespace std;
#define ll long long

// upper_bound (first element > K)
int UB(int ar[], int n, int K) {
    int l = 0, h = n - 1, ans = n;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (ar[mid] > K)
            ans = mid, h = mid - 1;
        else
            l = mid + 1;
    }
    return ans;
}

// upper_bound returns an iterator to the 1st element > key (binary search) in sorted range
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int ar[] = {2, 4, 7, 9, 10, 10, 10, 11, 13, 16};
    cout << UB(ar, 10, 11) << "\n"; // 8

    /////////// Example
    vector<int> v = {1, 2, 4, 4, 5, 7};

    cout << *upper_bound(v.begin(), v.end(), 3) << "\n"; // 4 (first > 3)
    cout << *upper_bound(v.begin(), v.end(), 4) << "\n"; // 5 (first > 4)
    cout << *upper_bound(v.begin(), v.end(), 6) << "\n"; // 7 (first > 6)
    if (upper_bound(v.begin(), v.end(), 7) == v.end()) cout << "Not found\n"; //

    /////////// Example (index)
    vector<int> vv = {1, 2, 4, 4, 5, 7};

    cout << (upper_bound(vv.begin(), vv.end(), 4) - vv.begin()) << "\n"; // 4
    cout << (upper_bound(vv.begin(), vv.end(), 3) - vv.begin()) << "\n"; // 2
    cout << (upper_bound(vv.begin(), vv.end(), 6) - vv.begin()) << "\n"; // 5
    cout << (upper_bound(vv.begin(), vv.end(), 7) - vv.begin()) << "\n"; // 6 (== v.size())
    return 0;
}
