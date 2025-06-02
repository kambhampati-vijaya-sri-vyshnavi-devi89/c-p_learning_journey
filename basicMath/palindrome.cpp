#include <bits/stdc++.h>
using namespace std;
int rev(int n)
{
    int rev = 0;
    int dup = n;// storing in duplicate bcz in while loop the n will be change 

    while (n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        rev = (rev * 10) + lastDigit;
    }
    if (rev == dup)
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
    rev(n);
    return 0;
}
