#include <bits/stdc++.h>
using namespace std;
int minSwaps(vector<int> &arr)
{
    int n = arr.size();
    int numberOfOnes = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            numberOfOnes++;
    }
    if (numberOfOnes == 0)
        return -1;
    int x = numberOfOnes;
    int count_ones = 0, maxOnes;
    for (int i = 0; i < x; i++)
    {
        if (arr[i] == 1)
            count_ones++;
    }
    maxOnes = count_ones;
    for (int i = 1; i <= n - x; i++)
    {

        if (arr[i - 1] == 1)
            count_ones--;

        if (arr[i + x - 1] == 1)
            count_ones++;

        if (maxOnes < count_ones)
            maxOnes = count_ones;
    }

    int numberOfZeroes = x - maxOnes;

    return numberOfZeroes;
}

int main()
{

    vector<int> a = {0, 0, 1, 0, 1, 1, 0, 0, 1};

    cout << minSwaps(a);

    return 0;
}






//Naive Approach

#include <bits/stdc++.h>
using namespace std;

int minSwaps(vector<int> &arr)
{
    int n = arr.size();
    int countone = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i])
            countone++;
    }
    if (countone == 0)
        return -1;
    int minswap = INT_MAX;
    for (int i = 0; i <= n - countone; i++)
    {
        int one = 0;
        for (int j = i; j < (i + countone); j++)
        {
            if (arr[j])
                one++;
        }
        minswap = min(minswap, (countone - one));
    }

    return minswap;
}
int main()
{
    vector<int> a = {1, 1, 0, 1, 0, 1, 1};
    cout << minSwaps(a);
    return 0;
}