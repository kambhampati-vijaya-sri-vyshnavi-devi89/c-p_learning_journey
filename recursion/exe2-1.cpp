//this is different from what i learn from basic 

#include <bits/stdc++.h>
using namespace std;
int cnt = 1;
void fun(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    fun(i + 1, n);
}
int main()
{

    int n;
    cin >> n;
    fun(1, n);

    return 0;
}
// print linearly from 1 to n
