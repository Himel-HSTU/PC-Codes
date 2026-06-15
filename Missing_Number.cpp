#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    ll n,s=0;
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        int a;
        cin>>a;
        s +=a;
    }
    ll z = n*(n+1);
    cout<<(z/2)-s<<endl;
    return 0;
}