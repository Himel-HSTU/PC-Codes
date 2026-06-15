#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, mex, max, sum = 0;
        cin >> n >> mex >> max;
        if ((mex - max) > 1 || (n < mex))
        {
            cout << -1 << endl;
            continue;
        }
        if (max == mex)
            max--;
        for (ll i = 0; i < n; i++)
        {
            if (mex > i)
                sum += i;
            else
                sum += max;
        }
        cout << sum << endl;
    }
    return 0;
}