#include<bits/stdc++.h>
using namespace std;
#define ll long long
//Kadane's Algorithhm
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin>>ar[i];
    ll sum=0,mx=LONG_MIN;
    int  ansstart,start,end,tmp;
    for (int i = 0; i < n; i++)
    {
        if (sum==0)
            start=i;
        
        sum+=ar[i];
        if (sum>mx){
            mx=sum;
            ansstart=start;
            end=i;
        }
        if (sum<0)
            sum=0;
    }
    cout<<mx<<"\n";
    cout<<"Maximum Subarray Sum : ";
    for (int i =   ansstart; i <= end; i++)
        cout<<ar[i]<<" ";

    
    return 0;
}