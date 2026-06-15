#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Two Pointer approach
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    vector<pair<ll,ll>> v;
    ll n,sum,temp;
    cin>>n>>sum;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        v.push_back({temp,i});
    }
    sort(v.begin(),v.end());
    ll i=0,j=n-1;
    while (j>i)
    {
        temp= v[i].first+v[j].first;
        if (temp==sum)
        {
            cout<<v[i].second+1<<" "<<v[j].second+1;
            return 0;
        }
        else if (temp<sum) i++;
        else j--;
    }
    cout<<"IMPOSSIBLE";
    return 0;
}
/*
One of the best optimized way
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, s;
    cin >> n >> s;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    map<int, int> mp;
    bool found = false;
    for (int i = 0; i < n; i++) {
        auto it = mp.find(s - ar[i]);
        if (it != mp.end()) {
            cout << it->second + 1 << " " << i + 1 << endl;
            found = true;
            break;
        }
        mp[ar[i]] = i;
    }
    if (!found)
        cout << "IMPOSSIBLE" << endl;

    return 0;
}
*/