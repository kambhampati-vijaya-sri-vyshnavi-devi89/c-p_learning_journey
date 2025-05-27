#include <bits/stdc++.h>
using namespace std;
/*
    Functions are set of code which performs something for you
    Functions are used to modularise code
    Functions are used to increase readability
    Functions are used to use same code multiple times
    void -> which does not returns anything
    return
    parameterised.
    non parameterised


*/
void printName(string name) // parametrized
{
    cout << name << endl;
}
void printName1() // non-parametrized
{
    cout << "hey siri" << endl;
}
int main()
{
    string name;
    cin >> name;
    printName(name);
    printName1();
    return 0;
}
