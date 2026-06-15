#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int ln,lm;
        cin>>ln>>lm;
        vector<int>sq(ln+1);
        for (int i = 0; i <= ln; i++)
        {
            cin>>sq[i];
        }
        if (ln==lm)
        {
            int rslt=1;
            for (int i = 2; i <= ln; i+=2)
            {
                if (sq[i]!= i/2)
                {
                    rslt =i/2;
                    break;
                }
                if (rslt==-1)
                {
                    rslt=ln/2+1;
                }
                cout<<rslt<<endl;
            }
            else{
                int p=-1;
               for (int i = 0; i < count; i++)
               {
                /* code */
               }
               
            }
        }
        
    }
    
    return 0;
}