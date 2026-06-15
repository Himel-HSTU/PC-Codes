#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    char c;
    map<char, int> mp;
    while (cin >> c)
        mp[c]++;
    for (auto it : mp)
        cout << it.first << " " << it.second << endl;
    return 0;
}