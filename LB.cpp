#include<bits/stdc++.h>
using namespace std;
#define ll long long
int BS(int ar[],int n,int K){
    int l=0,h=n-1,ans=n;
    while (l<=h)
    {
        int mid=(l+h)/2;
        if (ar[mid]>= K)
            ans=mid,h=mid-1;
        else l=mid+1;
    }
    return ans;
}
// lower_bound returns an iterator to the 1st element >= key (binary search) in sorted range
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int ar[]={2,4,7,9,10,10,10,11,13,16};
    cout<<BS(ar,10,11)<<endl<<endl;
    ///////////Example
    vector<int> v = {1, 2, 4, 4, 5, 7};

    cout << *lower_bound(v.begin(), v.end(), 3) << "\n"; // 4 (first >= 3)
    cout << *lower_bound(v.begin(), v.end(), 4) << "\n"; // 4 (first >= 4)
    cout << *lower_bound(v.begin(), v.end(), 6) << "\n"; // 7 (first >= 6)
    if (lower_bound(v.begin(), v.end(), 8) == v.end()) cout << "Not found\n"; //
///////////Example
     vector<int> vv = {1, 2, 4, 4, 5, 7};

    cout << (lower_bound(vv.begin(), vv.end(), 4) - vv.begin()) << "\n"; // 2
    cout << (lower_bound(vv.begin(), vv.end(), 3) - vv.begin()) << "\n"; // 2
    cout << (lower_bound(vv.begin(), vv.end(), 6) - vv.begin()) << "\n"; // 5
    cout << (lower_bound(vv.begin(), vv.end(), 8) - vv.begin()) << "\n"; // 6 (== v.size())
    return 0;
}