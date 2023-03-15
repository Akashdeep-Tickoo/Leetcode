#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>s;
        int n=nums.size();
        for(int i=0;i<n-2;++i)
        {
            int si=i+1;
            int ei=n-1;
            while(si<ei)
            {
                // cout<<nums[i]<<" "<<nums[si]<<" "<<nums[ei]<<endl;
                int sum=nums[i]+nums[si]+nums[ei];
                    if(sum==0)
                {
                    s.insert({nums[i],nums[si],nums[ei]});
                        ++si;
                        ei--;
                }
                else if(sum<0)
                {
                    si++;
                }
                else if(sum>0)
                {
                    ei--;
                }
            }
        }
        for(auto it=s.begin();it!=s.end();++it)
        {
            ans.push_back(*it);
        }
        return ans;
    }
};