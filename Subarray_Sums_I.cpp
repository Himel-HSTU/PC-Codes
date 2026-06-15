#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> ar(n + 1, 0);
    map<int, int> mp;
    mp[0] = 1; 
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        ar[i] = ar[i - 1] + num; 
        ans += mp[ar[i] - x];   
        mp[ar[i]]++;        
    }
    cout << ans << endl;
    return 0;
}
