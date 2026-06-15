#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    cout<<min(a*c,a/b*d+min(d,a%b*c));
    return 0;
}