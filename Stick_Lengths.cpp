#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    ll n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin>>ar[i];
    sort(ar,ar+n);    
    ll mid= (n/2);
    ll rslt=0;
    for (int i = 0; i < n; i++)
        rslt+=abs(ar[i]-ar[mid]);
    cout<<rslt<<endl;
    return 0;
}