#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        vector<ll> v = {a, b, c};
        ll sum = a + b + c;
        ll fc = n / sum;
        ll lc = fc * sum;
        ll ctr = fc * 3;
        for (int i = 0; i < 3 && lc < n; ++i)
        {
            lc += v[i];
            ctr++;
        }
        cout << ctr << endl;
    }
    return 0;
}
