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
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        int sizec = 0;

        for (auto u : v)
        {
            sizec += u.size();
            if (sizec <= m)
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}