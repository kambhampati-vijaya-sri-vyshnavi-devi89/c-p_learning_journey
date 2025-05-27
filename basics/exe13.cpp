#include <bits/stdc++.h>
using namespace std;
/*
    take two numbers print the sum

*/
int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << res;
    return 0;
}
