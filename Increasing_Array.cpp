#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    ll n,ad=0;
    cin>>n;
    vector<ll> ar(n,0);
    for (auto &s : ar)
        cin>>s;
    for (ll i = 1; i < n; i++)
    {
        if (ar[i]<ar[i-1]){
        ad +=abs(ar[i]-ar[i-1]);
        ar[i]=ar[i-1];
        }
    }
    cout<<ad;
    return 0;
}