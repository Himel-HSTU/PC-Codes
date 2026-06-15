#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    vector<vector<int>>v{
        {1, 2, 9, 10, 25},
        {4, 3, 8, 11, 24},
        {5, 6, 7, 12, 23},
        {16, 15, 14, 13, 22},
        {17, 18, 19, 20, 21}
    };
    int q;
    cin>>q;
    while (q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<v[a-1][b-1]<<endl;
    }
    return 0;
}