#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void fun()
{
    if (cnt == 5)
        return;
    cout << "raj" << endl;
    cnt++;
    fun();
}
int main()

{
    fun();

    return 0;
}
/*  
print the name 5 times
output:
raj
raj
raj
raj
raj
*/
