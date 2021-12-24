#include <bits/stdc++.h>
using namespace std;

bool naive_isPal(string &str)
{
    string rev = str;
    reverse(rev.begin(), rev.end());
    return (rev == str);
}

bool efficient_isPal(string &str)
{
    int begin = 0, end = str.length() - 1;
    while (begin < end)
    {
        if (str[begin] != str[end])
            return false;
        begin++;
        end--;
    }
    return true;
}
int main()
{
    string str;
    cin >> str;
    cout << "Is the string palindrome?" << naive_isPal(str) << " " << efficient_isPal(str);
    return 0;
}