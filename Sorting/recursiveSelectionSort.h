#include <bits/stdc++.h>

using namespace std;

void recursiveSelectionSort(vector<int> &nums, int index)
{
    if (index == nums.size())
    {
        return;
    }
    int min = index;
    for (int j = index + 1; j < nums.size(); j++)
    {
        if (nums[j] < nums[min])
        {
            min = j;
        }
    }
    if (min != index)
    {
        swap(nums[min], nums[index]);
    }
    recursiveSelectionSort(nums, index + 1);
}
