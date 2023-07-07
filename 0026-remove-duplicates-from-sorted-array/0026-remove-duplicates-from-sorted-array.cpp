#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pp=0;
        int at=INT_MIN;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]!=at)
            {
                at=nums[i];
                nums[pp]=at;
                ++pp;
            }
        }
        return pp;
    }
};