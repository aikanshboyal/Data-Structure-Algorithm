#include <bits/stdc++.h>
using namespace std;

int unionCount(int arr[], int brr[], int n, int m)
{
    unordered_set<int> s(arr, arr + n);
    for (int i = 0; i < m; i++)
    {
        s.insert(brr[i]);
    }
    return s.size();
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int m;
    cin >> m;
    int brr[m];
    for (int j = 0; j < m; j++)
        cin >> brr[j];

    cout << "Union Count = " << unionCount(arr, brr, n, m);
    return 0;
}