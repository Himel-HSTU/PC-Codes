#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    ll n;
    cin>>n;
    vector<ll>v;
    while (n--)
    {
        ll tmp;
        cin>>tmp;
        auto it= upper_bound(v.begin(),v.end(),tmp);
        if (it==v.end())
            v.push_back(tmp);
        else *it=tmp;
    }
    cout<<v.size()<<endl;
    return 0;
}