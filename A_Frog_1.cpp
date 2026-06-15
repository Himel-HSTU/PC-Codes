#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, h[10000005], dp[10000005], vis[10000005];
int solve(int i)
{
    if (i == n)
        return 0;
    if (vis[i]) return dp[i];
    int res = INT_MAX;
    int cost = abs(h[i] - h[i + 1]);
    int now = cost + solve(i + 1);
    res = min(res, now);
    if (i + 2 <= n)
    {
        cost = abs(h[i] - h[i + 2]);
        now = cost + solve(i + 2);
        res = min(res, now);
    }
    vis[i]=1;
    dp[i]=res;
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    int ans = solve(1);
    cout << ans << endl;
    return 0;
}