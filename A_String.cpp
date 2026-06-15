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
        string s;
        cin>>s;
        int ctr=0;
        for (int i = 0; i < s.size(); i++)
            if (s[i]=='1')
                ctr++;
        cout<<ctr<<endl;
    }
    return 0;
}