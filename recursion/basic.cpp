#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void fun()
{
    if (cnt == 5)
        return;
    cout << cnt << endl;
    cnt++;
    fun();
}
int main()

{
    fun();

    return 0;
}
