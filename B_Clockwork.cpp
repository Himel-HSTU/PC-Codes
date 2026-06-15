#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    string ans="YES";
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        if (x<=2 *max(i-1,n-i))
            ans="NO";
    }
    cout<<ans<<endl;
}
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin>>t;
    while (t--)
        solve();
    return 0;
}
/*(
#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
int n;
void solve(){
  cin >> n;
  string ans = "Yes";
  for (int i = 1,x;i <= n;i++){
    cin >> x;
    if (x <= 2 * max(i - 1,n - i)){
      ans = "No";
  
    }
  }
  cout << ans << "\n";
}
signed main(){
  int t;
  for (cin >> t;t--;){
    solve();
  }
}
)*/