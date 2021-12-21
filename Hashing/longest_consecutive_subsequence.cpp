#include <bits/stdc++.h>
using namespace std;

int longestSub(int arr[], int n)
{
    unordered_set<int> h(arr, arr + n);
    int res = 1;
    for (auto x : h)
    {
        if (h.find(x - 1) == h.end())
        {
            int curr = 1;
            while (h.find(x + curr) != h.end())
                curr++;
            res = max(res, curr);
        }
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
    cout << "Longest consective subsequence = " << longestSub(arr, n);
    return 0;
}