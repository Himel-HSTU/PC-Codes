#include<bits/stdc++.h>
using namespace std;
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t,z,p,q;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int num,dif=0;
        cin>>num;
        for (int i = 0; i < n-1; i++)
        {
            cin>>num;

            if (a[i]>num)
            {
                dif += a[i]-num;
            }
        }
        
        dif +=a[n-1];
        cout<<dif<<endl;
    }
    return 0;
}