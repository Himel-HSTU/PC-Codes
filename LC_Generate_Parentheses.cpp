#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> v;
void generate(string s,int open,int close){
    if (open==0 && close ==0)
    {
        v.push_back(s);
        return;
    }
    if (open>0)
    {
        s.push_back('(');
        generate(s,open-1,close);
        s.pop_back();
    }
    if (close>0)
    {
        if (open<close){
        s.push_back(')');
        generate(s,open,close-1);
        s.pop_back();
        }
    }
}
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n;
    cin>>n;
    string s;
    generate(s,n,n);
    for (auto i : v)
    {
        cout<<i<<endl;
    }
    
    return 0;
}