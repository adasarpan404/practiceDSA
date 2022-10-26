#include <bits/stdc++.h>

using namespace std;

void printS(int index, int sum, vector<int> &ds, int initialSum, int arr[], int n)
{
    if (index == n)
    {
        if (sum == initialSum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }

        return;
    }
    ds.push_back(arr[index]);

    initialSum += arr[index];

    printS(index + 1, sum, ds, initialSum, arr, n);

    initialSum -= arr[index];
    ds.pop_back();
    printS(index + 1, sum, ds, initialSum, arr, n);
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
    int sum;
    cin >> sum;
    vector<int> ds;
    printS(0, sum, ds, 0, a, n);
    return 0;
}