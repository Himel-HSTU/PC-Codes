#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, z = 0, t;
        cin >> n >> k; 
        vector<int> v(n);
        vector<int> fq;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        for (auto it : mp)
        {
            fq.push_back(it.second);
        }
        sort(fq.begin(), fq.end());//2 2 3 4
        for (int i = 0; i < fq.size(); i++)
        {
            if (fq[i] > k)
                break;
            z++;
            k = k - fq[i];
        }
        t = fq.size() - z;
        cout << max(1, t) << endl;
    }

    return 0;
}