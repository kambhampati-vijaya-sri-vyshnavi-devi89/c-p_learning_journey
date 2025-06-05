
#include <bits/stdc++.h>
using namespace std;
// parameterized way to print sum of n
void f(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    f(i - 1, sum + i);
}
int main()
{

    int n;
    cin >> n;
    f(n, 0);

    return 0;
}
