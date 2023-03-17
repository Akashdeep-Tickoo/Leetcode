#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>arr(nums);
        sort(arr.begin(),arr.end());
        int si=-1;
        int ei=-1;
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            if(nums[i]!=arr[i])
            {
                si=i;
                break;
            }
        }
        for(int i=n-1;i>=0;--i)
        {
            if(nums[i]!=arr[i])
            {
                ei=i;
                break;
            }
        }
        if(si==-1&&ei==-1)
        {
            return 0;
        }
        return (ei-si)+1;
    }
};