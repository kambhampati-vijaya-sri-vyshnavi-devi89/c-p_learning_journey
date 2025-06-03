#include <bits/stdc++.h>
using namespace std;
int rev(int n)
{
    int rev = 0;
    int dup = n;// storing in duplicate bcz in while loop the n will be change 

    while (n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        rev = (rev * 10) + lastDigit;
    }
    if (rev == dup)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
int main()

{
    int n;
    cin >> n;
    rev(n);
    return 0;
}
/*
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }
        return x == revertedNumber || x == revertedNumber / 10;
    }
};

*/
