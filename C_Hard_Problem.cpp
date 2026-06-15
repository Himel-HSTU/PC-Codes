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
        int m,a,b,c,r,z1,z2,z3,z;
        cin>>m>>a>>b>>c;
        if (m>=a)
            z1=a;
        else z1=m;
        if (m>=b)
            z2=b;
        else z2=m;
        r=(m*2)-z1-z2;
        if (r>=c)
            z3=c;
        else z3=r;
        cout<<z1+z2+z3<<endl;
    }
    return 0;
}   