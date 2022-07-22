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

    int res = arr[1] - arr[0];
    int minValue = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i] - minValue);
        minValue = min(minValue, arr[i]);
    }
    cout << "Maximum sidderence value = " << res;
    return 0;
}