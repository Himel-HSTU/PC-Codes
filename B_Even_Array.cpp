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
        int n, a = 0, b = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 != i % 2)
            {
                if (i % 2 == 0)
                    a++;
                else
                    b++;
            }
        }
        cout << ((a == b) ? a : -1) << endl;
    }
    return 0;
}
