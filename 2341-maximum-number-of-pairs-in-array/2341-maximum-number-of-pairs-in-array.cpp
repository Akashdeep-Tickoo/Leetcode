#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>ourmap;
        vector<int>ans;
        int left=0,right=0;
        for(int i=0;i<nums.size();++i)
        {
            ourmap[nums[i]]+=1;
        }
        auto it=ourmap.begin();
        while(it!=ourmap.end())
        {
            left+=it->second/2;
            right+=it->second%2;
            ++it;
        }
        ans.push_back(left);
                ans.push_back(right);
        return ans;
    }
};