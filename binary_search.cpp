#include <bits/stdc++.h>
using namespace std;
#define ll long long
int binarySearch(vector<int> &arr, ll x)
{
    ll sz = arr.size();
    ll low = 0, high = sz;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    
    cout << binarySearch(v, t) << endl;
    return 0;
}

/*
// C++ program to illustrate how to use the
// binary_search() function
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 8, 9, 11};
    // Element to be searched
    int target = 8;
    // Check for the target in the vector v
    if (binary_search(v.begin(), v.end(), target)) {
        // If the value is found
        cout << target << " found.";
    } else {
        // If the value is not found
        cout << target << " NOT found.";
    }
    return 0;
}
*/
/*
int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}
*/