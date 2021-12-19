#include <bits/stdc++.h>
using namespace std;

void printFrequencies(int arr[], int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (auto j : m)
    {
        cout << j.first << " " << j.second << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    printFrequencies(arr, n);
    return 0;
}