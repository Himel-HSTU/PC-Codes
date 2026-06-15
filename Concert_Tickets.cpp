#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    ll n,m;
    cin>>n>>m;
    multiset<ll>ms;
    for (int i = 0; i < n; i++)
    {
        ll p;
        cin>>p;
        ms.insert(p);
    }
    for (int i = 0; i < m; i++)
    {
        ll cp;
        cin>>cp;
        auto it= ms.upper_bound(cp);
        if (it==ms.begin())
        {
            cout<<"-1\n";
            continue;
        }
        else {
            cout<<*(--it)<<"\n";
            ms.erase(it);
        }
    }
    return 0;
}