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
        int n,a,b;
        cin>>n>>a>>b;
        int dis=abs(a-b);
        if (dis%2==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}