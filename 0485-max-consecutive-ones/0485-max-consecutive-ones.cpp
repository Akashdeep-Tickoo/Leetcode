#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int temp=0;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]!=1)
            {
                ans=max(ans,temp);
                temp=0;
            }
            else
            {
                temp++;
            }
        }
                        ans=max(ans,temp);
        return ans;
        
    }
};