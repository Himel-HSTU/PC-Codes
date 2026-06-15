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
        int z=s.size()-1;
        for (int i = z; i >= 0; --i)
        {
            if (s[i]=='p')
                cout<<"q";
            else if (s[i]=='q')
                cout<<"p";
            else cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}