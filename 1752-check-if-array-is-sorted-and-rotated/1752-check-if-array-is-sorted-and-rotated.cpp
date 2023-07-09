#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        bool ans=true;
        if(nums.size()==1)
        {
            return true;
        }
        vector<int>chums;
        int x=0;
        bool flag=false;
        for(int i=1;i<nums.size();++i)
        {
            if(flag==false)
            {
                if(nums[i]<nums[i-1])
                {
                    x=i;
                    flag=true;
                }
            }
            if(flag)
            {
                chums.push_back(nums[i]);
            }
        }
       
        if(flag)
        {
            for(int i=0;i<x;++i)
            {
                chums.push_back(nums[i]);
            }
        
            for(int i=1;i<nums.size();++i)
            {
                if(chums[i]<chums[i-1])
                {
                    return false;
                }
            }
        }
        
        return ans;
    }
};