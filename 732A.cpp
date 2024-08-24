#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k,r,ctr=1;
    cin>>k>>r;
    int z=k;
    bool chk=true;
    while (chk)
    {
        if (z%10==r || z%10==0 )
            chk=false;
        else{
            z=z+k;
            ctr++;
        }
    }
    cout<<ctr<<"\n";
    return 0;
}