#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n=1098;
    cout<<floor(log10(n)) + 1;  
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a=537;
    jump:
    int z=a%10;
    cout<<z<<endl;
    z=a/10;
    if (a!=0)
        goto jump;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a = 537;

    jump: // Label for goto statement
    int z = a % 10;
    cout << z << endl;
    a = a / 10;

    if (a != 0)
        goto jump; // Jump to the label

    return 0;
}
*/