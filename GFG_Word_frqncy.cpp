#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    map<string, int> mp;
    string s,s1;
    int a=1;
    while (cin >> s)
    {
        if (a==1) 
        {
            s1=s;
            a++;
        }
        if (s.size() == 0)
            break;
        mp[s]++;
    }
    int z = 1;
    for (auto it : mp)
    {
        if (it.second > z)
            z = it.second;
    }
    for (auto it1 : mp)
    {
        if (z==1){
            cout<<s1<<" "<<"1"<<endl;
            break;
        }
        else if (it1.second==z)
        {
            cout << it1.first << " " << it1.second << endl;
            break;
        }
    }

    return 0;
}
