#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    double n;
    cin>>n;
    if (n>=38)
        cout<<"1"<<endl;
    else if (n>=37.5 && n<38)
        cout<<"2"<<endl;
    else if (n<37.5)
        cout<<"3"<<endl;    
    return 0;
}