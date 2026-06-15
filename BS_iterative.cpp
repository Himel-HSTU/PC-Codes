#include<bits/stdc++.h>
using namespace std;
#define ll long long
int BS(int ar[],int n,int K){
    int l=0,h=n-1;
    while (l<=h)
    {
        int mid=(l+h)/2;
        if (ar[mid]==K)
        return mid;
        else if (ar[mid]>K)
            h=mid-1;
        else l=mid+1;
    }
    return -1;
}
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int ar[]={2,4,7,9,11,13,16};
    cout<<BS(ar,7,9);
    return 0;
}