#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fibo(ll num){
    if(num == 1)
        return 0;
    else if(num == 2)
        return 1;
    else 
        return fibo(num-1)+fibo(num-2);
}
int main()
{
    ll num;
    cin >> num;
    cout << fibo(num);
    return 0;
}