#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> x(n);
        unordered_map<int, int> fq;
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
            fq[x[i]]++;
        }
        int s = 0;
        for (auto it = fq.begin(); it != fq.end(); ++it) {
            int num = it->first;
            int ctr = it->second;
            int z = k - num;
            if (fq.count(z)) {
                if (num == z) {
                    s += ctr / 2;
                } else if (num < z) {
                    int p = min(ctr, fq[z]);
                    s += p;
                }
            }
        }
        cout << s << "\n";
    }
    return 0;
}
