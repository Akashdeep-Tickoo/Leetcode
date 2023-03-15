#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int>ds;
        set<int>s;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            s.insert(nums[i]);
        }
        auto it=s.begin();
        while(it!=s.end())
        {
            ds.push_back(*it);
            ++it;
        }
        
        int p=ds.size();
        if(p==0)return ans;
        int count=1;
        for(int i=0;i<p-1;++i)
        {
            if(ds[i+1]==ds[i]+1)
            {
                ++count;
            }
            else
            {
                count=1;
            }
            ans=max(ans,count);
        }
        ans=max(ans,count);
        return ans;
    }
};