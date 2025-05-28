#include <bits/stdc++.h>
using namespace std;
/*
    pass by reference-
    it takes original address
    only change is & in function parameter

*/
void doSomething(int &num)
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
