#include<bits/stdc++.h>
using namespace std;
#define ll long long
int thirdLargest(vector<int> &arr){
    int n=arr.size();
    if (n<3)
    return -1;
    
    int lrg=-1,slrg=-1,tlrg=-1;
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
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>tlrg && arr[i]!=lrg && arr[i]!=slrg)
        tlrg=arr[i];
    }
    if (tlrg == -1) {
        return lrg; 
    }
    return tlrg;
}
int main ()
{
    vector<int> arr = {855, 450, 132, 359, 233, 825, 604 ,481, 262, 337, 720 ,525 ,652, 300, 906, 219, 926, 906, 293, 864, 817, 498, 30, 639, 66};  
    cout<<thirdLargest(arr); 
    return 0;
}