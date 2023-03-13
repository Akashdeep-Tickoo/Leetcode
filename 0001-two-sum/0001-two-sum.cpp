#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ourmap;
        vector<int>ans;
        for(int i=0;i<nums.size();++i)
        {
            int x=target-nums[i];
            if(ourmap.count(x)>0)
            {
                ans.push_back(ourmap[x]);
                ans.push_back(i);
                return ans;
            }
            ourmap[nums[i]]=i;
        }
        return ans;
    }
};