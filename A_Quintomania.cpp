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
        int n, ctr = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 1; i < n; i++)
        {
            if (abs(a[i] - a[i - 1]) == 5 || abs(a[i] - a[i - 1]) == 7)
                ctr++;
            else
                continue;
        }
        if (ctr + 1 == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}