#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,vis[10000005],dp[10000005];
int solve(int m){
    if (m==0) return 0;
    if (vis[m]) return dp[m];
    int m2=m,res=INT_MAX;
    while (m2)
    {
        int dg=m2%10;
        if (dg!=0)
            res=min(res,1+solve(m-dg));
        m2/=10;
    }
    vis[m]=1;
    dp[m]=res;
    return res;
}
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    cin>>n;
    int ans=solve(n);
    cout<<ans<<endl;
    return 0;
}