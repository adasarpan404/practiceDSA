#include<bits/stdc++.h>

using namespace std;

vector<int> bubbleSort(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size()-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j], nums[j+1]);
            }
        }
    }
    return nums;
}