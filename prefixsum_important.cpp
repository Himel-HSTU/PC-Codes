#include<bits/stdc++.h>
using namespace std;
#define ll long long
// a specialized prefix sum method which take querries and add a number x among the range l,r in an array;
//CPS Class-6
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,q;
    cin>>n>>q;
    int ar[n+2]={0};
    while (q--)
    {
        int l,r,x;
        cin>>l>>r>>x;
        ar[l] +=x;
        ar[r+1] -=x;
    }
    for (int i = 1; i <= n; i++)
        ar[i]+=ar[i-1];
    for (int i = 1; i <= n; i++)
        cout<<ar[i]<<" ";
        
    return 0;
}