#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    int arr[n];
    cout << "Enter array elements:";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int largest = 0, second_largest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            second_largest = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (second_largest == -1 || arr[i] > arr[second_largest])
                second_largest = i;
        }
    }
    cout << "Second largest element = " << arr[second_largest];
    return 0;
}