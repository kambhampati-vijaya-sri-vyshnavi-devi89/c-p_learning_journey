#include <bits/stdc++.h>
using namespace std;
void exPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " ";
    cout << p.second;
    pair<int, pair<int, int>> q = {1, {4, 5}};
    cout << q.first;

    cout << q.second.first;
    cout << q.second.second;
    cout << endl;
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {56, 78}};
    cout << arr[1].second;
}
void exVectors()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(56);
    // print elements
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.push_back({3, 4});
    vec.push_back({5, 6});
    vec.emplace_back(1, 8);
    // Method 1: Range-based for loop
    cout << "Using range-based for loop:\n";
    for (auto &p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }

    // Method 2: Traditional for loop
    cout << "Using traditional for loop:\n";
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i].first << " " << vec[i].second << endl;
    }
    vector<int> vim(5, 1000);
    cout << vim[2];
}
int main()
{
    exVectors();

    return 0;
}
