#include <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;
    int sum = 0;
    for (int i = 1; i <= 9; ++i)
    {
        for (int j = 1; j <= 9; ++j)
        {
            int product = i * j;
            if (product != X)
                sum += product;
        }
    }
    cout << sum << endl;
    return 0;
}
