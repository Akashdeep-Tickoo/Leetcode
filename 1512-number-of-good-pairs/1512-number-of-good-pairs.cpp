#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>ourmap;
        int ans=0;
        for(int i=0;i<nums.size();++i)
        {
            if(ourmap.count(nums[i])>0)
            {
                ans+=ourmap[nums[i]];
            }
            ourmap[nums[i]]+=1;
        }
        return ans;
    }
};