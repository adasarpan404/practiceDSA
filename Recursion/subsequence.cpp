#include <bits/stdc++.h>

using namespace std;

void printF(int index, vector<int> &ds, int a[], int n)
{
    if (index == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}"
                 << " ";
        }
        cout << endl;
        return;
    }
    printF(index + 1, ds, a, n);
    ds.push_back(a[index]);
    printF(index + 1, ds, a, n);
    ds.pop_back();
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
    vector<int> ds;
    printF(0, ds, a, n);
    return 0;
}