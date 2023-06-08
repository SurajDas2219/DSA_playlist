#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{

    for (int i = n - 1; i >= 1; i--)
    {
        /*This is done for optimization to check if the array is already sorted or not*/
        // if the array is already sorted, then T.C=O(N) and if not the T.C=O(N^2)
        // The space complexity of bubble sort is O(1), which means that it only requires a constant amount of additional space. This is because bubble sort does not need to create any new data structures
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
        else
        {
            cout << "runs\n";
        }
    }
}

int main()
{

    int n;
    cout << "Enter the size of an array:";
    cin >> n;
    int arr[n];
    cout << "Enter the element of an array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}