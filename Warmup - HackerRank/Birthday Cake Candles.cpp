#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, count = 0, n;
    cin >> n;
    int candles[n];
    for (i = 0; i < n; i++)
        cin >> candles[i];
    int m = *max_element(candles, candles + n);
    for (i = 0; i < n; i++)
    {
        if (candles[i] == m)
            count++;
    }
    cout << count;
    return 0;
}