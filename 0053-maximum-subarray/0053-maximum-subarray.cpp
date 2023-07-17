class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long ans=INT_MIN;
        long long sum=0;
        int j=0;
        while(j<nums.size())
        {
            sum+=nums[j];
            ans=max(ans,sum);
            if(sum<0)
            {
                sum=0;
            }
            ++j;
        }
        return ans;
    }
};