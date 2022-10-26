#include <bits/stdc++.h>

using namespace std;

void reverse(int a[], int i, int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(a[i], a[n - i - 1]);
    reverse(a, i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    reverse(a, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}