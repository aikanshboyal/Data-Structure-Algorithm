#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n ";
    cin >> n;
    cout << "Enter array elements ";
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int largest = INT_MIN, smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
        if (arr[i] > largest)
            largest = arr[i];
    }
    cout << "Largest Element = \n"
         << largest;
    cout << "Smallest Element = " << smallest;
    return 0;
}