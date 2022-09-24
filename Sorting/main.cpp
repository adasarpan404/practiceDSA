#include <bits/stdc++.h>
#include "recursiveSelectionSort.h"
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    vector<int> a;
    for (int i = 0; i < 10; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << "\n"
         << "\n";
    cout << "\n"
         << "\n";
    cout << "\n"
         << "\n";
    auto start = high_resolution_clock::now();
    recursiveSelectionSort(a, 0);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
    return 0;
}

