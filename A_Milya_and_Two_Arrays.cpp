#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int size;
        cin >> size;
        vector<long long> a1(size);
        vector<long long> a2(size);
        for (int i = 0; i < size; i++) 
            cin >> a1[i];
        for (int i = 0; i < size; i++) 
            cin >> a2[i];
        set<long long> uniqueSums;
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++) 
                uniqueSums.insert(a1[i] + a2[j]);
        if (uniqueSums.size() >= 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
