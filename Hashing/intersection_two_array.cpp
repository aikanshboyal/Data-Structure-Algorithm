#include <bits/stdc++.h>
using namespace std;

int naive_intersection(int arr[], int brr[], int n, int m)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            continue;

        for (int j = 0; j < m; j++)
        {
            if (arr[i] == brr[j])
            {
                res++;
                break;
            }
        }
    }
    return res;
}

int efficient_intersection(int arr[], int brr[], int n, int m)
{
    unordered_set<int> s(arr, arr + n);
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        if (s.find(brr[i]) != s.end())
        {
            res++;
            s.erase(brr[i]);
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
    int m;
    cin >> m;
    int brr[m];
    for (int j = 0; j < m; j++)
        cin >> brr[j];
    cout << "No. of Intersection pairs = " << naive_intersection(arr, brr, n, m)<<endl;
    cout << "No. of Intersection pairs = " << efficient_intersection(arr, brr, n, m);
    return 0;
}