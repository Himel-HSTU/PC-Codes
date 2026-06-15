#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[10000005],tmp[10000005];
void merge(int l,int r){
    int mid=(l+r)/2;
    int i1=l,i2=mid+1,j=l;
    while (i1<=mid && i2<=r)
    {
        if (a[i1]<a[i2])
        {
            tmp[j]=a[i1];
            i1++;
        }
        else {
            tmp[j]=a[i2];
            i2++;
        }
        j++;
    }
    while (i1<=mid)
    {
        tmp[j]=a[i1];
            j++,i1++;
    }
    while (i2<=r)
    {
        tmp[j]=a[i2];
            j++,i2++;
    }
    for (int i = l; i <= r; i++)
    {
        a[i]=tmp[i];
    }
    
}
void mergesort(int l,int r){
    if (l==r) return;
    int mid = (l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,r);
}
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    mergesort(0,n-1);    
    for (int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    return 0;
}