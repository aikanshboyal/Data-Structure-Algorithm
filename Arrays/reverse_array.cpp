#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 0, high = n - 1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }

    cout << "Reversed array = ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}