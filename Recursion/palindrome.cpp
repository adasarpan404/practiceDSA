#include <bits/stdc++.h>

using namespace std;

bool palinDrome(string &s, int i)
{
    if (i > s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return palinDrome(s, i + 1);
}

int main()
{
    string s;
    cin >> s;
    cout << palinDrome(s, 0);
    return 0;
}