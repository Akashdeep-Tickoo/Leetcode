#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int i=0;
        while(i<nums.size())
        {
            ans+=min(nums[i],nums[i+1]);
            i=i+2;
        }
        return ans;
    }
};