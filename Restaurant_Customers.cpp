#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    ll n;
    cin>>n;
    ll a,b,ans=0,mx=0;
    map<ll,ll>mp;
    for (ll i = 0; i < n; i++)
    {
        cin>>a>>b;
        mp[a]++;
        mp[b]--;
    }
    for (auto x : mp)
    {
        ans += x.second;
        mx = max(mx,ans);
    }
    cout<<mx<<endl;
    return 0;
}