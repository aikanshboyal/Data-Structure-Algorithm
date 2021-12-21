#include <bits/stdc++.h>
using namespace std;
bool isSum(int arr[], int n, int sum)
{
    unordered_set<int> s;
    int pre_sum = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if (pre_sum == sum)
            return true;
        if (s.find(pre_sum - sum) != s.end())
            return true;
        s.insert(pre_sum);
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum;
    cin >> sum;
    cout << "The given array has sum = " << sum << ": " << isSum(arr, n, sum);
    return 0;
}