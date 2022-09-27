class Solution {
public:
    void sub(int index,vector<int>& ds,vector<vector<int>>& ans,vector<int>& arr)
    {
        ans.push_back(ds);
        for(int i=index;i<arr.size();++i)
        {
            if(i!=index&&arr[i]==arr[i-1])continue;
            ds.push_back(arr[i]);
            sub(i+1,ds,ans,arr);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        sub(0,ds,ans,nums);
        return ans;
    }
};