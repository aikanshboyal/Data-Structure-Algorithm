#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int low, int high)
{

    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main()
{
    int n, d;
    cout << "Enter value of n: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\nEnter value of d: ";
    cin >> d;

    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
    
    cout << "Modified array elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}