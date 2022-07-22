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

    int curr_leader = arr[n - 1];
    cout << curr_leader << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (curr_leader < arr[i])
        {
            curr_leader = arr[i];
            cout << curr_leader << " ";
        }
    }
    return 0;
}