#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    set<pair<string, string>> s;
    for (int i = 0; i < n; ++i) {
        string sp, c;
        cin >> sp >> c;
        s.insert({sp, c});
    }
    cout << s.size() << endl;
    return 0;
}
