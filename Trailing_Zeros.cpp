#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    ll n;
    cin>>n;
    int pw=1,ans=0;
    while (1)
    {
        int temp=n/pow(5,pw);
        if (temp){
            ans+=temp;
            pw++;
        }
        else break;
    }
    cout<<ans<<endl;
    return 0;
}