#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cout << i << " \n"[i == n];
    }
    return 0;
}