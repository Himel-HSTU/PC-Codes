#include <bits\stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int t = INT_MAX;
    for (int i = 0; i < n - m + 1; i++)
        if (arr[i + m - 1] - arr[i] < t)
            t = arr[i + m - 1] - arr[i];
    cout << t;
    return 0;
}