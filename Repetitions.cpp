#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    string s;
    cin>>s;
    char c=s[0];
    int ctr=0,mx=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]==c)
            ctr++;
        else {
            mx=max(ctr,mx);
            ctr=1;
            c=s[i];
        }
    }
    mx=max(ctr,mx);
    cout<<mx;
    return 0;
}