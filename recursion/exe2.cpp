#include <bits/stdc++.h>
using namespace std;

int cnt = 1;
void fun(int n)
{
    if (cnt == n + 1)
        return;
    cout << cnt << endl;
    cnt++;
    fun(n);
}
int main()

{
    int n;
    cin >> n;
    fun(n);

    return 0;
}
// print linearly from 1 to n
