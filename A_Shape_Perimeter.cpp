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
        int n, m, rslt;
        cin >> n >> m;
        rslt = 4 * n * m;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            if (i == 0)
                continue;
            rslt = rslt - (2 * ((m - x) + (m - y)));
        }
        cout << rslt << endl;
    }
    return 0;
}