#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a[4], x = 0;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    char c;
    while (cin >> c)
    {
        x += a[c - '1'];
    }
    cout << x;
    return 0;
}