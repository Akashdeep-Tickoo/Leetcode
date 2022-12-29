#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low,medium,high;
        low=0;
        medium=0;
        high=nums.size()-1;
        while(medium<=high)
        {
            if(nums[medium]==0)
            {
                swap(nums[low],nums[medium]);
                ++medium;
                ++low;
            }
            else if(nums[medium]==1)
            {
                ++medium;
            }
            else if(nums[medium]==2)
            {
                swap(nums[medium],nums[high]);
                high=high-1;
            }
        }
    }
};