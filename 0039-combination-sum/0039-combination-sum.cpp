#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void findSum(vector<int>& candidates,vector<vector<int>>& ans,vector<int>& ds,int target,int i,int x,int sum)
    {
        if(i>x-1)
        {
            return;
        }
        if(sum>=target)
        {
            if(sum==target)
            {
                ans.push_back(ds);
            }
            return;
        }
        ds.push_back(candidates[i]);
        findSum(candidates,ans,ds,target,i,x,sum+candidates[i]);
        ds.pop_back();
        findSum(candidates,ans,ds,target,i+1,x,sum);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        int x=candidates.size();
        vector<int>ds;
        findSum(candidates,ans,ds,target,0,x,0);
        return ans;
    }
};