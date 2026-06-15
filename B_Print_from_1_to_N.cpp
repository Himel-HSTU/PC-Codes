#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long factorial(int num)
{
    if (num == 1)
        return num;
    return num * factorial(num - 1);
}
int main()
{
    int num;
    cin >> num;
    cout << factorial(num);
    return 0;
}