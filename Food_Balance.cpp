#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int f,p,ff,pp;
    cin>>f>>p>>ff>>pp;
    int d=abs(f-p);
    int dd=abs(ff-pp);
    if (dd>d)
        cout<<"First";
    else if (dd==d)
        cout<<"Both";
    else cout<<"Second";
    
    return 0;
}