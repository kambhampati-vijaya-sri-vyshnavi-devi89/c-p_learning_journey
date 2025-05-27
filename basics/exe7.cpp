#include <bits/stdc++.h>
using namespace std;
/*
 strings
*/
int main()
{
    string s = "banana";
    int len = s.size();
    s[len - 1] = 'p';// replace last character
    cout << s[len - 1];
    return 0;
}
