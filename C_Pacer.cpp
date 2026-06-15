#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n + 2);
        vector<int> b(n + 2);

        a[0] = 0; b[0] = 0;               // start at minute 0, side 0
        for (int i = 1; i <= n; i++) cin >> a[i] >> b[i];
        a[n + 1] = m; b[n + 1] = 0;       // dummy end at m

        ll ans = 0;

        for (int i = 0; i <= n; i++)
        {
            ll gap = a[i + 1] - a[i];
            int dist = abs(b[i + 1] - b[i]);

            if (dist == 0)
            {
                if (gap % 2 == 0) ans += gap;
                else ans += gap - 1;
            }
            else
            {
                if (gap % 2 == 1) ans += gap;
                else ans += gap - 1;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
