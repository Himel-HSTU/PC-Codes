#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int x = 0; x <= n; x++){
        int ctr = 0;
        for (int i = 0; i < n; i++)
            ctr += x < a[i];
        if (ctr == x)
        {
            cout << x << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
