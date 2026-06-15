#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, x, y, z;
        cin >> n >> x >> y;
        z = min(x, y);
        cout << (int)ceil((double)n / z) << endl;
    }
    return 0;
}
