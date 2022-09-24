#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < ((2 * n) - 1); i++)
    {
        int start, end;
        if (i < n)
        {
            start = 0;
            end = i;
        }
        else
        {
            start = 0;
            end = (2 * n - 2) - i;
        }
        for (int j = start; j <= end; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *