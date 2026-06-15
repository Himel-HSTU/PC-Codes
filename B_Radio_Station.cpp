#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    map<string, string> mp;
    while (n--){
        string a, b;
        cin >> a >> b;
        mp[b] = a;
    }
    while (q--){
        string s, ss;
        cin >> s >> ss;
        ss.pop_back();
        cout << s << " " << ss << "; #" << mp[ss]<<endl;

    }
    return 0;
}
