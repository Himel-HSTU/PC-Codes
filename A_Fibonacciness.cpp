#include <bits/stdc++.h>
using namespace std;
#define ll long long
int func(int a1, int a2, int a3, int a4, int a5)
{
    int ctr = 0;
    if (a3 == a1 + a2)
        ctr++;
    if (a4 == a2 + a3)
        ctr++;
    if (a5 == a3 + a4)
        ctr++;
    return ctr;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a1, a2, a3, a4, a5, mx = 0, tmp;
        cin >> a1 >> a2 >> a4 >> a5;
        a3 = a1 + a2;
        mx = func(a1, a2, a3, a4, a5);
        a3 = a4 - a2;
        tmp = func(a1, a2, a3, a4, a5);
        mx = max(mx, tmp);
        a3 = a5 - a4;
        tmp = func(a1, a2, a3, a4, a5);
        mx = max(mx, tmp);
        cout << mx << endl;
    }
    return 0;
}
