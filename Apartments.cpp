#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    ll n,m,k;
    cin>>n>>m>>k;
    vector<int> ap(n);
    vector<int> av(m);
    for (int i = 0; i < n; i++)
        cin>>ap[i];
    for (int i = 0; i < m; i++)
        cin>>av[i];
    sort(ap.begin(),ap.end());
    sort(av.begin(),av.end());
    int ctr=0,f=0,s=0;
    while (f<n &&  s<m)
    {
        if (abs(ap[f]-av[s])<=k)
        {
            ctr++;
            f++;
            s++;
        }
        else if (ap[f]>av[s])
            s++;
        else f++;
    }
    cout<<ctr;
    return 0;
}