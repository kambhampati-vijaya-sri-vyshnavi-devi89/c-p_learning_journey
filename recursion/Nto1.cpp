
#include <bits/stdc++.h>
using namespace std;

void fun(int i, int n)
{
    if (i < 1)
        return;
    cout << i << endl;
    fun(i - 1, n);
}
int main()
{

    int n;
    cin >> n;
    fun(n, n);

    return 0;
}
// print linearly from nto 1
