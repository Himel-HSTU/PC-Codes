#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,m,rslt;
        cin>>n>>m;
        rslt=max(n,m)+1;
        cout<<rslt<<endl;
    }
    return 0;
}