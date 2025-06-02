/*
You are given an integer n. You need to return the number of digits in the number.
The number will have no leading zeroes, except when the number is 0 itself.
Examples:
Input: n = 4
Output: 1
Explanation: There is only 1 digit in 4.
*/
#include <bits/stdc++.h>
using namespace std;
int countDigit(int n) {
    
    if(n==0){
        return 1;

    }
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout << count << endl;
}


int main()
{
    int n;
    cin >> n;
    countDigit(n);

    return 0;
}
