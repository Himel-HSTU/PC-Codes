#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, q, i, l, r, k;
    cin >> n >> q;
    int arr[n + 5];
    for (i = 1; i <= n; i++)
        cin >> arr[i];
    int pref[n + 5] = {0}, suf[n + 5] = {0};
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += arr[i];
        pref[i] = sum;
    }
    sum = 0;
    for (i = n; i >= 1; i--)
    {
        sum += arr[i];
        suf[i] = sum;
    }
    while (q--)
    {
        cin >> l >> r >> k;
        sum = pref[l - 1] + suf[r + 1] + ((r - l + 1) * k);
        if (sum & 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
