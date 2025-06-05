#include <bits/stdc++.h>
using namespace std;
// check wheather given string is palindrome or not using recursion
bool f(int i, string n)
{
    if (i >= n.size() / 2)
        return true;
    if (n[i] != n[n.size() - i - 1])
        return false;
    return f(i + 1, n);
}

int main()
{
    string n = "madam";
    cout << f(0, n);
    return 0;
}
