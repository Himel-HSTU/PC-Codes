#include <bits/stdc++.h>
using namespace std;
#define ll long long

void func(int num)
{
    int counter = 1;
    if (num == 0)
        return;
    cout << counter++ << endl;
    return func(num - 1);
}
int main()
{
    int num;
    cin >> num;
    func(num);
}