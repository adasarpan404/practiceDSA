#include <bits/stdc++.h>

using namespace std;

void MergeSortedIntervals(vector<int> &v, int s, int m, int e)
{

    vector<int> temp;

    int i, j;
    i = s;
    j = m + 1;

    while (i <= m && j <= e)
    {

        if (v[i] <= v[j])
        {
            temp.push_back(v[i]);
            ++i;
        }
        else
        {
            temp.push_back(v[j]);
            ++j;
        }
    }

    while (i <= m)
    {
        temp.push_back(v[i]);
        ++i;
    }

    while (j <= e)
    {
        temp.push_back(v[j]);
        ++j;
    }

    for (int i = s; i <= e; ++i)
        v[i] = temp[i - s];
}

void MergeSort(vector<int> &v, int s, int e)
{
    if (s < e)
    {
        int m = (s + e) / 2;
        MergeSort(v, s, m);
        MergeSort(v, m + 1, e);
        MergeSortedIntervals(v, s, m, e);
    }
}
vector<int> useMergeSort(vector<int> nums)
{
    MergeSort(nums, 0, nums.size() - 1);
    return nums;
}