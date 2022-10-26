//  * * * * *
//   * * * *
//    * * *
//     * *
//      *
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *

#include <bits/stdc++.h>

using namespace std;

void printUpper(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 0; j < i; j++)
        {
            if (i % 2 != 0)
            {
                if (j % 2 == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (j % 2 != 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}
    void printLower(int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<" ";
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int j = n - 1; j >= i; j--)
            {
                if (n % 2 != 0)
                {
                    if (j % 2 == 0)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                else
                {
                    if (j % 2 != 0)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            for (int j = n - 2; j >= i; j--)
            {
                if (i % 2 == 0)
                {
                    if (j % 2 == 0)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                else
                {
                    if (j % 2 != 0)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
    }
    int main()
    {
        int n;
        cin >> n;
        printLower(n);
        printUpper(n);
        
        return 0;
    }
