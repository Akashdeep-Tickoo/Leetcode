#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0;
        unordered_set<int>s;
        for(auto x:nums)
        {
            s.insert(x);
        }
        for(auto x:s)
        {
            int parent=x-1;
            int count=1;
            if(s.find(parent)==s.end())
            {
                int next=x+1;
                while(s.find(next)!=s.end())
                {
                    ++next;
                    ++count;
                }
                                    ans=max(ans,count);

            }
        }
        return ans;
    }
};