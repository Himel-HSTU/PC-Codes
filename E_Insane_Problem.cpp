#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll k, l1, r1, l2, r2, ans = 0, z = 1;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    while (z <= 1e9)
    {
        ans += max(min(r2 / z, r1) - max((l2 + z - 1) / z, l1) + 1, 0LL);
        z *= k;
    }
    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}