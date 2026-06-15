#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = 0;
        ans += bool(b > a) + bool(c > a) + bool(d > a);
        cout << ans << '\n';
    }
}