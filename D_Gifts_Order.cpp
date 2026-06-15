#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll func(int n, vector<ll> &arr)
{
    ll mc = 0;
    for (int i = 0; i < n; i++)
    {
        ll mn = arr[i];
        ll mx = arr[i];
        for (int r = i; r < n; r++)
        {
            mn = min(mn, arr[r]);
            mx = max(mx, arr[r]);
            ll z = mx - mn - (r - i);
            mc = max(mc, z);
        }
    }
    return mc;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << func(n, arr) << "\n";
        for (int i = 0; i < q; i++)
        {
            int p;
            ll x;
            cin >> p >> x;
            arr[p - 1] = x;
            cout << func(n, arr) << "\n";
        }
    }
    return 0;
}