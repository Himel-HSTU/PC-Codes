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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        bool b = false;
        int i = 0;
        while (i < n - 1){
            if (v[i] > v[i + 1]){
                b = true;
                break;}
            else{
                v[i + 1] -= v[i];
                v[i] = 0;}
            i++;}
        if (b)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;}
    return 0;
}