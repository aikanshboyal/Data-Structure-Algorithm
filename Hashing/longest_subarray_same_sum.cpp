#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n, int brr[])
{
    unordered_map<int, int> h;
    int sum = 0;
    int pre_sum = 0, res = 0;
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i] - brr[i];
    }
    for (int i = 0; i < n; i++)
    {
        pre_sum += temp[i];
        if (pre_sum == sum)
            res = i + 1;
        if (h.find(pre_sum) == h.end())
            h.insert({pre_sum, i});
        if (h.find(pre_sum - sum) != h.end())
            res = max(res, i - h[pre_sum - sum]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int brr[n];
    for (int i = 0; i < n; i++)
        cin >> brr[i];
    cout << "Longest subarray with given sum = " << maxLen(arr, n, brr);
    return 0;
}