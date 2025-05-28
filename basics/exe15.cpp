#include <bits/stdc++.h>
using namespace std;
/*
    pass by value -
    there is no change in original value
    only it takes copy the value


*/
void doSomething(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main()
{
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}
