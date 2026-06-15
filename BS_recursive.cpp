#include <bits/stdc++.h>
using namespace std;
#define ll long long
int BS(int ar[], int l, int h, int k)
{
    if (l > h)
        return -1;
    int mid = (l + h) / 2; // MID= Low+ (high-low)/2;
    if (ar[mid] == k)
        return mid;
    else if (ar[mid] > k)
        return BS(ar, l, mid - 1, k);

    return BS(ar, mid+1, h, k);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ar[] = {2, 4, 7, 9, 11, 13, 16};
    cout << BS(ar, 0, 6, 14);
    return 0;
}