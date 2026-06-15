#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int s, e;
    cin >> s >> e;
    int counter = 0;
    for (int i = 0; i <= s; i++)
    {
        for (int z = 0; z <= s; z++)
        {
            if (e - i - z >= 0 && e - i - z <= s)
                counter++;
        }
    }
    cout << counter << endl;
    return 0;
}