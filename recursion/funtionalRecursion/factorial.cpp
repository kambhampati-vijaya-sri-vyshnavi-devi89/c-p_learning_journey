
#include <bits/stdc++.h>
using namespace std;
// factorial of a number using multiple recursion
int f(int n)
{
    if (n <= 1)
        return n;
    int last = f(n - 1);
    int slast = f(n - 2);
    return last + slast;
}

int main()
{
    int n;
    cout << f(4);
    return 0;
}
