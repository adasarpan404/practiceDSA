#include <bits/stdc++.h>
using namespace std;
int Partition(vector<int> &v, int start, int end)
{

    int pivot = end;
    int j = start;
    for (int i = start; i < end; ++i)
    {
        if (v[i] < v[pivot])
        {
            swap(v[i], v[j]);
            ++j;
        }
    }
    swap(v[j], v[pivot]);
    return j;
}

void quickSort(vector<int> &v, int start, int end)
{

    if (start < end)
    {
        int p = Partition(v, start, end);
        quickSort(v, start, p - 1);
        quickSort(v, p + 1, end);
    }
}

vector<int> useQuickSort(vector<int> nums)
{
    quickSort(nums, 0, nums.size() - 1);
    return nums;
}