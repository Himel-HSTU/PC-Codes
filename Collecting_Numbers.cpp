#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countRounds(int n, vector<int> &arr)
{
    int rounds = 0;
    int next_number = 1;
    while (next_number <= n)
    {
        for (int i = 0; i < n; i++)
            if (arr[i] == next_number)
                next_number++;
        rounds++;
    }
    return rounds;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << countRounds(n, arr) << endl;
    return 0;
}