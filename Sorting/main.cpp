#include <bits/stdc++.h>
#include "insertionSort.h"
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
    vector<int> res = insertionSort(a);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    for (int i = 0; i < 10; i++)
    {
        cout << res[i] << "\t";
    }
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
    return 0;
}