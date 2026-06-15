#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,q;
    cin>>n>>q;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    while (q--)
    {
        int x,y;
        cin>>x>>y;
        if
        sort(ar+x-1,ar+y-1);
        cout<<ar[x-1]<<endl;
    }
    
    return 0;
}