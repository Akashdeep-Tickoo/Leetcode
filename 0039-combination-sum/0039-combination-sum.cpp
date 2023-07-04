class Solution {
public:
    void cs(vector<int>& candidates,vector<int>& ds,int target,int i,vector<vector<int>>& ans)
    {
        if(target<=0)
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(i==candidates.size())
        {
            return;
        }
        ds.push_back(candidates[i]);
        cs(candidates,ds,target-candidates[i],i,ans);
        ds.pop_back();
        cs(candidates,ds,target,i+1,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        cs(candidates,ds,target,0,ans);
        return ans;
    }
};