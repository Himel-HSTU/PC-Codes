#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> v1;
    cout << "Size of v1 = " << v1.size() << endl;
    v1.push_back(10);
    cout << "Size of v1 = " << v1.size() << endl;
    vector<char> v2(10, 'a');
    cout << "Size of v2 = " << v2.size() << endl;
    for (auto i : v2)
        cout << i << " ";
    ////////////////
    vector<int> v11(5);
    /* assigned value to vector v11 */
    for (int i = 0; i < v11.size(); ++i)
        v11[i] = i + 1;
    /* create a range constructor v2 from v1 */
    vector<int> v22(v11.begin(), v11.end());
    for (int i = 0; i < v22.size(); ++i)
        cout << v22[i] << endl;
    ///////
    cout << endl;
    vector<int> vv1(5);
    /* assign value to vector v1 */
    for (int i = 0; i < vv1.size(); ++i)
        vv1[i] = i + 1;
    /* create a copy constructor v2 from v1 */
    vector<int> vv2(vv1);
    for (int i = 0; i < vv2.size(); ++i)
        cout << vv2[i] << endl;
    cout << endl
         << endl;
    /////////////
    auto il = {1, 2, 3, 4, 5};
    /* create vector from initializer list */
    vector<int> v(il);
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << endl;
    vector<char> tutorial2{'W', 'O', 'R', 'L', 'D'};
    int x = tutorial2.capacity();
    cout << "Capacity is : " << x;
    cout<<endl<<endl;
    ///////////
    vector<int> tutorial = {11, 22, 33};
    tutorial.emplace(tutorial.begin()+2, 44);
    cout << "Elements are:";
    for (auto &x : tutorial)
        cout << ' ' << x;
    cout << '\n';
    tutorial.erase(tutorial.begin()+1);
    cout << "Elements are:";
    for (auto &x : tutorial)
        cout << ' '<< x;
        cout << '\n';
        cout << '\n';
    cout << "Elements are:";
    tutorial2.erase(tutorial2.begin(), tutorial2.begin() + 2);
    for (auto &x : tutorial2)
        cout << ' '<< x;
        cout << '\n';
    /////////////////////////////////////
    vector<int> v3 = {5};
   v3.insert(v3.begin(), 4, 6);
   for (auto it = v3.begin(); it != v3.end(); ++it)
      cout << *it << endl;
    vector<int> tutorial11{11,22,33,44};
   vector<int> tutorial22{111,222,333,444};
   tutorial11.swap(tutorial22);
   cout << "vector1 Elements are : ";
   for (auto x = tutorial11.begin();
      x < tutorial11.end(); ++x)
   cout << *x << " ";
   cout << endl<< "vector2 Elements are : ";
   for (auto x = tutorial22.begin();
      x < tutorial22.end(); ++x)
   cout << *x << " ";
    return 0;
}