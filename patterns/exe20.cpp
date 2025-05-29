void pattern18(int n)
{
    int iniSpace = 0;
    for (int i = 0; i < n; i++)
    {
        //  stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        //  space
        for (int j = 0; j < iniSpace; j++)
        {
            cout << " ";
        }
        //  stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        iniSpace += 2;
        cout << endl;
    }
    int iniS = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        //  stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        //  space
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        //  stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        iniS -= 2;
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
        pattern18(n);
    }

    return 0;
}
/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
