#include <bits/stdc++.h>
using namespace std;
#define ll long long
// How to erase from vector
void pushZerosToEnd(vector<int> &arr)
{
    int ctr = 0;
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] != 0)
            arr[ctr++] = arr[i];
    while (ctr < arr.size())
        arr[ctr++] = 0;
    for (auto it : arr)
        cout << it << " ";
}
int main()
{
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);
    return 0;
}
/*
My Firts Approch:
int cnt = 0;
    for (auto it = arr.begin(); it != arr.end();)
    {
        if (*it == 0){
            it = arr.erase(it);
             cnt++;}
        else
            ++it;
    }
    for (int i = 0; i < cnt; i++)
        arr.push_back(0);
    for (auto it : arr)
        cout << it << " ";
        ////////////
        //////////////
    int n = arr.size();
    vector<int> temp(n);
    int j = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] != 0)
            temp[j++] = arr[i];
    while (j < n)
        temp[j++] = 0;
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
    for (auto it : arr)
        cout<<it<<" ";
*/