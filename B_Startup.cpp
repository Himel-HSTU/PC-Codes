#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve (){
    int n,k;
    cin>>n>>k;
    int ar[k+1]={0},x,y;
    for (int i = 0; i < k; i++)
    {
        cin>>x>>y;
        ar[x]+=y;
    }
    sort(ar,ar+k+1);
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(k-i>=0)
        ans+=ar[k-i];
    }
    cout<<ans<<endl;
}
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    solve();
    return 0;
}