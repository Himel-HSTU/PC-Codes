#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k, h[10000005], dp[10000005], vis[10000005];
int solve(int i)
{
    if (i == n)
        return 0;
    if (vis[i])
        return dp[i];
    int res = INT_MAX;
    for (int j = 1; j <= k; j++)
    {
        if (i + j <= n)
        {
            int cost = abs(h[i] - h[i + j]);
            int now = cost + solve(i + j);
            res = min(res, now);
        }
        vis[i] = 1;
        dp[i] = res;
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    int ans = solve(1);
    cout << ans << endl;
    return 0;
}