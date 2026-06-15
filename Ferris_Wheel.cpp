#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,x;
    cin>>n>>x;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin>>ar[i];
    sort(ar,ar+n);
    int b=0,e=n-1,ctr=0;
    while (e>=b)
    {
        if (ar[b]+ar[e]<=x)
        {
            ctr++;
            b++;
            --e;
        }
        else if (ar[b]+ar[e]>x)
        {
            ctr++;
            --e;
        }
    }
    cout<<ctr<<endl;
    return 0;
}