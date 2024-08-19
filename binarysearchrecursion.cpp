#include<bits/stdc++.h>
using namespace std;
int binsearch(int ar[],int s,int e,int target){
    if (s>e)
       return -1;
    int m=s+((e-s)/2);
    if (ar[m]==target)
       return m;
    if (target>ar[m])
       return binsearch(ar,m+1,e,target);
    if (target<ar[m])
       return binsearch(ar,s,m,target);
}
int main ()
{
    int arr[]={10,15,20,25,30,40,50,70,100,200};//Sorted Array
    cout<<binsearch(arr,0,9,50);
    return 0;
}