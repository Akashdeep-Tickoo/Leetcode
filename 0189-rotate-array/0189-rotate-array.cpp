class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        if(n==1)
        {
            return;
        }
        vector<int> ans(n);
        for(int i=0;i<n;++i)
        {
            int p=(i+k)%n;
            ans[p]=nums[i];
        }
        
        for(int i=0;i<n;++i)
        {
            nums[i]=ans[i];
        }
        
        
        
    }
};