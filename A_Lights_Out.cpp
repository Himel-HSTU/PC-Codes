#include<bits/stdc++.h>
using namespace std;
#define ll long long
int lfunc(int n){ 
    if (n == 0)
        return 1;
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ar1[3][3];
    int ar2[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            cin >> ar1[i][j];
            if (ar1[i][j] % 2 == 0)
                ar1[i][j] = 0;
            else
                ar1[i][j] = 1;
            ar2[i][j] = 1;}}
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (ar1[i][j] == 1){                                                 
                ar2[i][j] = lfunc(ar2[i][j]); 
                if (i > 0)
                    ar2[i - 1][j] = lfunc(ar2[i - 1][j]); 
                if (j > 0)
                    ar2[i][j - 1] = lfunc(ar2[i][j - 1]); 
                if (i < 2)
                    ar2[i + 1][j] = lfunc(ar2[i + 1][j]); 
                if (j < 2)
                    ar2[i][j + 1] = lfunc(ar2[i][j + 1]); }}}
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            cout << ar2[i][j]; 
        cout << endl;}
    return 0;
}
