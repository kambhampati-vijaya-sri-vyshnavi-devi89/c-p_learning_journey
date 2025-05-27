#include <bits/stdc++.h>
using namespace std;
/*
arrays
*/
int main()
{
    int arr[5];
    //method 1
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    arr[3] += 10;// increment the 4th element by 10
    cout << arr[3];

    return 0;
}
