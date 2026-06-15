#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
int a[N], b[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
        v.push_back({b[i], a[i]});
    sort(v.begin(), v.end());
    int ans = 0, last = 0;
    for (auto x : v)
    {
        if (x.second >= last)
        {
            ans++;
            last = x.first;
        }
    }
    cout << ans << '\n';
    return 0;
}