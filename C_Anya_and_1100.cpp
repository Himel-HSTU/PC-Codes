#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    vector<ll> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            v[i] = 1;
    }
    set<ll> set;
    for (int i = 0; i <= (n - 4); i++)
    {
        if (v[i] == 1 && v[i + 1] == 1 && v[i + 2] == 0 && v[i + 3] == 0)
            set.insert(i);
    }
    ll qry;
    cin >> qry;
    while (qry--)
    {
        ll ind, val;
        cin >> ind >> val;
        ind--;
        if (v[ind] != val)
        {
            v[ind] = val;
            for (int i = max<int>(0, ind - 3); i <= min<int>(n - 4, ind); i++)
            {
                if (v[i] == 1 && v[i + 1] == 1 && v[i + 2] == 0 && v[i + 3] == 0)
                    set.insert(i);
                else
                    set.erase(i);
            }
        }
        if (set.size() > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}