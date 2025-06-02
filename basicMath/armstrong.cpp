#include <bits/stdc++.h>
using namespace std;
int arm(int n)
{
    int sum = 0;
    int dup = n;

    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit *lastDigit*lastDigit);
        n = n / 10;
    }
    if (sum == dup)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
int main()

{
    int n;
    cin >> n;
    arm(n);
    return 0;
}
