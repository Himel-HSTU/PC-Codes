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
        int l,r;
        cin>>l>>r;
        if (r==l+1 || (l==1 && r==1))
            cout<<"1\n";
        else cout<<r-l<<endl;
    }
    
    return 0;
}