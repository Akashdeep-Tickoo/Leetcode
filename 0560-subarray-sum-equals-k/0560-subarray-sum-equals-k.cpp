class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long sum=0;
        int ans=0;
        unordered_map<int,int>ourmap;
        ourmap[0]=1;
        int j=0;
        while(j<nums.size())
        {
            sum+=nums[j];
            int p=sum-k;
            if(ourmap.count(p)>0)
            {
                ans+=ourmap[p];
            }
            ourmap[sum]+=1;
            ++j;
        }
        return ans;
        
    }
};