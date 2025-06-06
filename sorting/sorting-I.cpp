
#include <bits/stdc++.h>
using namespace std;
int selection_sort(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        int temp;
        for (int j = i; j <= n - 2; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int bubble_sort(int arr[], int n)
{
    int temp;
    for (int i = n - 1; i >= 1; i--)
    {
        int didswap = 0;//for best case we use this to see how many runs
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didswap = 1;
            }
        }
        if (didswap == 0)
            break;
        cout << "runs\n";
    }
}
int insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
