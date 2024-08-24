#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a != b)
            flag = 1;
    }
    if (flag)
        cout << "Happy Alex\n";
    else
        cout << "Poor Alex\n";
    return 0;
}