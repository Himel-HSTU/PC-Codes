#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
    char c;
    int ctr=0;
    while (scanf("%c",&c)!= EOF)
        if (c=='0')
        ctr++;
    cout<<ctr<<endl;    
    return 0;
}