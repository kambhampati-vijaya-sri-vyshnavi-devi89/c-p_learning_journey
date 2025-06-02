#include <bits/stdc++.h>
using namespace std;
int prime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    if (cnt == 2)
    {
        cout << "it is prime no";
    }
    else
    {
        cout << "it is not a prime no";
    }
}

int main()

{
    int n;
    cin >> n;
    // print wheather it is a prime or not
    prime(n);
    return 0;
}
