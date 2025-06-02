#include <bits/stdc++.h>
using namespace std;
int div(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
}
int main()

{
    int n;
    cin >> n;
    // print all divisors
    div(n);
    return 0;
}
