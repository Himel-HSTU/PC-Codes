#include <bits/stdc++.h>

using namespace std;
int main(void)
{
    array<int, 5> arr = {10, 20, 30, 40, 50};
    size_t i;
    for (i = 0; i < 5; ++i)
        cout << arr.at(i) << " ";
    cout << endl;
    cout << "First element of array = " << arr.front() << endl;
    cout << "Last element of array = " << arr.back() << endl;
    for (auto it = arr.begin(); it != arr.end(); ++it)
        cout << ' ' << *it;
    array<char, 4> ar;
    ar.fill('H');
    for (auto it = ar.begin(); it != ar.end(); ++it)
        cout << ' ' << *it;
    cout << endl;
    if (arr.empty())
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    // swapin between two arrays
    array<int, 3> x = {1, 3, 5};
    array<int, 3> y = {2, 4, 6};
    x.swap(y);//@@@@@@
    cout << "\nAfter swap:" << endl;
    cout << "x: ";
    for (int num : x)
        cout << num << " ";
    cout << "\ny: ";
    for (int num : y)
        cout << num << " ";
    cout << endl;
    // another get method
    array<int, 3> arrr = {10, 20, 30};
    cout << "arr[0] = " << get<0>(arrr) << "\n";
    cout << "arr[1] = " << get<1>(arrr) << "\n";
    cout << "arr[2] = " << get<2>(arrr) << "\n";
    // we can easily perform == >< funtion to compare between two arrays
    array<int, 3> x1 = {11, 22, 33};
    array<int, 3> y1 = {11, 22, 33};
    if (x1 == y1) // chec each elements
    {
        cout << "Arrays are equal." << endl;
    }
    else
    {
        cout << "Arrays are not equal." << endl;
    }
    array<int, 3> x2 = {1, 200, 33};
    array<int, 3> y2 = {11, 4, 23};
    if (x2 < y2)//compare only the first element
    {
        cout << "x is less than y." << endl;
    }
    else
    {
        cout << "x is not less than y." << endl;
    }
    return 0;
}