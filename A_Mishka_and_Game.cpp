#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mi = 0, ci = 0;
    while (n--)
    {
        int m, c;
        cin >> m >> c;
        if (m > c)
            mi++;
        if (m < c)
            ci++;
    }
    if (mi > ci)
        cout << "Mishka";
    else if (mi < ci)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
}
