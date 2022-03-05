#include <bits/stdc++.h>
using namespace std;

bool iterative_isSeq(string &str1, string &str2)
{
    int j = 0;
    int n = str1.length() - 1;
    int m = str2.length() - 1;
    for (int i = 0; i < n && j < m; i++)
    {
        if (str1[i] == str2[j])
            j++;
    }
    return (j == m);
}

int main()
{
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;

    cout << "Is subsequence ?" << iterative_isSeq(str1, str2);
    return 0;
}