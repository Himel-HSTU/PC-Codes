#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long maxProduct(vector<int> arr) {
    int n = arr.size();
    int a[n];
    copy(arr.begin(), arr.end(), a);
    long long max_product = LLONG_MIN;
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
                max_product = max(max_product, (long long)a[i] * a[j] * a[k]);
    return max_product;
    }
int main()
{
    vector<int> arr = {1, -4, 3, -6, 7, 0};
    cout << maxProduct(arr);
    return 0;
}

//  cout<<endl<<*it3<<endl<<*it2<<endl<<*it1;
/*
long long int n=arr.size();
  sort(arr.begin(),arr.end());
  auto it1=arr.end()-1,it2=arr.end()-2,it3=arr.end()-3;
  long long int a=(*it1)*(*it2)*(*it3);
  auto it4=arr.begin(),it5=arr.begin()+1;
  long long int b=(*it1)*(*it4)*(*it5);
  return max(a,b);
*/