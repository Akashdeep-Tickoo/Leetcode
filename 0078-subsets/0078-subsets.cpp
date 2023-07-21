class Solution {
public:
     void helpersubset(vector<int>& A,vector<int> ds,int i,vector<vector<int>>& ans)
    {
        if(i==A.size())
        {
            ans.push_back(ds);
            return;
        }
        ds.push_back(A[i]);
        helpersubset(A,ds,i+1,ans);
        ds.pop_back();
        helpersubset(A,ds,i+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> ds;
        helpersubset(nums,ds,0,ans);
        return ans;
    }
};