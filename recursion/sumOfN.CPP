
#include <bits/stdc++.h>
using namespace std;
int sum(int n) // funtional way to print sum of n nos
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
int main()
{

    int n;
    cin >> n;
    cout << sum(n) << endl;

    return 0;
}
