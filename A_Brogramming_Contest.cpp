#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin>>t;
    while (t--){
        int a,ctr=0;
        cin>>a;
        string s;
        cin>>s;
        for (auto i = 1; i < a; i++)
            if (s[i]!=s[i-1]) ctr++;
        if (s[0]=='1') ctr++;
        cout<<ctr<<endl;}
    return 0;
}