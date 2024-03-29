#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    return s.size();

    // Can also be written as........
    //unordered_set<int> s(arr, arr + n);
    // return s.size();
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
    cout << "No. of Distinct element = " << countDistinct(arr, n) << endl;
    return 0;
}