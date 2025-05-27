#include <bits/stdc++.h>
using namespace std;
/*
    math built in function
    minimum
    maximum

*/

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int minimum = min(num1, num2);
    cout << "the minimum" << minimum << endl;
    int maximum = max(num1, num2);
    cout << "the maximum" << maximum;
    return 0;
}
