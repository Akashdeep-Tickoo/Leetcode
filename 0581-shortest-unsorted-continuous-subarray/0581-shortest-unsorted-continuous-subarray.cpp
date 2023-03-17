#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int snum=INT_MAX;
        int lnum=INT_MIN;
        int n=nums.size();
        if(n==1)
        {
            return 0;
        }
        else
        {
            if(nums[0]>nums[1])
            {
                lnum=nums[0];
            }
            if(nums[n-1]<nums[n-2])
            {
                snum=nums[n-1];
            }
            for(int i=1;i<n-1;++i)
            {
                if(nums[i]>nums[i+1]||nums[i]<nums[i-1])
                {
                    snum=min(snum,nums[i]);
                    lnum=max(lnum,nums[i]);
                }
            }
            if(snum==INT_MAX&&lnum==INT_MIN)
            {
                return 0;
            }
            int lpos=-1;
            int rpos=-1;
            for(int i=0;i<n;++i)
            {
                if(snum<nums[i])
                {
                    lpos=i;
                    break;
                }
            }
            for(int i=n-1;i>0;--i)
            {
                if(lnum>nums[i])
                {
                    rpos=i;
                    break;
                }
            }
            return rpos-lpos+1;
        }
        
        
    }
};