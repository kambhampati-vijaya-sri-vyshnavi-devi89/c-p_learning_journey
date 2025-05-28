#include <bits/stdc++.h>
using namespace std;
/*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
 */
void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
       // This is the inner loop which loops for the columns
       // no. of columns = row number for each line here.
       // Here, we print numbers equal to the row number
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        pattern1(n);
    }

    return 0;
}
