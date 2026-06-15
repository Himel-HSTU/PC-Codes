#include <bits/stdc++.h>
using namespace std;
#define ll long long
int getSecondLargest(vector<int> &arr)
{
    int n=arr.size();
    int lrg=-1,slrg=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>lrg)
           lrg=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>slrg && arr[i]!=lrg)
            slrg=arr[i];
    }
    return slrg;
}
int main()
{
    vector<int> arr = {0, 0, 0, 0};
    cout << getSecondLargest(arr);
    return 0;
}
// Our First Brute Force Approch
/*
bool comp(int a, int b) {
      return a > b;
}
int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
       cin>>ar[i];
    sort(ar,ar+n,comp);
    for (int i = 0; i < n; i++)
       cout<<ar[i]<<" ";
    cout<<endl;
    for (int i = 1; i <= n; i++)
    {
        if (i==n)
        {
            cout<<"-1"<<endl;
            break;
        }
        else if (ar[i]!=ar[i-1])
        {
            cout<<ar[i]<<endl;
            break;
        }
        else continue;
    }
*/