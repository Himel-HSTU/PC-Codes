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
            ll a;
            cin >> a;
            string s;
            string ss = "aeiou";
            for (int i = 0; i < 5; ++i)
                for (int j = 0; j < a / 5 + (i < a % 5); j++)
                    s += ss[i];
            cout << s << endl;
        }
    return 0;
}