#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin>>t;
    while (t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m));
        for (auto &i:v)
            for (auto &j:i)
                cin>>j;
        if (n*m==1) cout<<"-1\n";
        else {
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++)
                    cout << v[(i + 1) % n][(j + 1) % m] << ' ';
                cout<<"\n";}}}
    return 0;
}