#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;

//O(nlog(n)) solution
bool naive_areAnagram(string &str1, string &str2)
{
    if (str1.length() != str2.length())
        return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return (str1 == str2);
}

bool efficient_areAnagram(string &str1, string &str2)
{
    if (str1.length() != str2.length())
        return false;
    int count[CHAR] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for (int i = 0; i < CHAR; i++)
    {
        if (count[i] != 0)
            return false;
    }
    return true;
}
int main()
{
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    cout << "Are strings anagram? " << naive_areAnagram(str1, str2) << " " << efficient_areAnagram(str1, str2);
    return 0;
}