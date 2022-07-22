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

    int temp = arr[0];
    for (int i = 1; i < n; i++)
        arr[i - 1] = arr[i];
    arr[n - 1] = temp;

    cout << "Modified array elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}