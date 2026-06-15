#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m;
    cin >> m;
    while (m--)
    {
        int n;
        cin >> n;
        map<int, int> m;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            cout << char('a' + m[a]);
            m[a]++;
        }
        cout << endl;
    }
    return 0;
}