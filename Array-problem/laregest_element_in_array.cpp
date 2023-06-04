#include <bits/stdc++.h>
using namespace std;

// Linear search: This is the simplest approach. Start at the beginning of the array and compare each element to the current largest element. If the element is larger, update the largest element. Continue until you reach the end of the array.
//  int find_largest_ele(int n, int arr[])
//  {
//      int max = arr[0];
//      for (int i = 0; i < n; i++)
//      {
//          if (arr[i] > max)
//          {
//              max = arr[i];
//          }
//      }
//      return max;
//  }

int find_largest_ele(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] > arr[high])
        {
            high = mid - 1;
        }
        else if (arr[mid] < arr[low])
        {
            low = mid + 1;
        }
        else
        {
            return arr[mid];
        }
    }
    return arr[high];
}

int main()
{

    int n;
    cout << "Enter the size of an array:";
    cin >> n;

    int arr[n];

    cout << "Enter the element in an array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The largest element in an array is " << find_largest_ele(arr, n);

    return 0;
}