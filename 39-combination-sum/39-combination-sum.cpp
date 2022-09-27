class Solution {
public:
    void comb(vector<int>& candidates,vector<vector<int>>& ans,vector<int>& ds,int index,int target)
    {
        if(index==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[index]<=target)
        {
            ds.push_back(candidates[index]);
            comb(candidates,ans,ds,index,target-candidates[index]);
            ds.pop_back();
        }
        comb(candidates,ans,ds,index+1,target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        comb(candidates,ans,ds,0,target);
        return ans;
    }
};