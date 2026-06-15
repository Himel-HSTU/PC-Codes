#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int N, K;
        cin>>N>>K;
        int P[105] = {0};
        int possible = 1;
        for (int r = 0; r < K; r++)
        {
            int indices[110];
            int count = 0;
            for (int i = 1; i <= N; i++)
            {
                if (i % K == r)
                    indices[count++] = i;
            }
            if (count == 1) {
                possible = 0;
                break;
            }
            for (int j = 0; j < count; j++){
                int pos = indices[j];
                int value = indices[(j + 1) % count];
                P[pos] = value;
            }
        }
        if (!possible)
            cout<<"-1\n";
        else
        {
            for (int i = 1; i <= N; i++)
                cout<<P[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
