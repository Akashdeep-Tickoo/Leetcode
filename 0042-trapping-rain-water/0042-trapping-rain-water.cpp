#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) { 
        int ans=0;
        pair<int,int> p;
        p={-1,-1};
        vector<pair<int,int>> left;
        vector<pair<int,int>> right;
        for(int i=0;i<height.size();++i)
        {
            left.push_back(p);
            if(p.first<height[i])
            {
                p={height[i],i};
            }
        }
        p={-1,-1};
        for(int i=height.size()-1;i>=0;--i)
        {
            right.push_back(p);
            if(p.first<height[i])
            {
                p={height[i],i};
            }
        }
        reverse(right.begin(),right.end());
        for(int i=0;i<height.size();++i)
        {
            if(left[i].second!=-1&&right[i].second!=-1)
            {
                int sum=min(right[i].first,left[i].first);
                sum=sum-height[i];
                if(sum>=0)
                {
                    ans+=sum;
                }
            }
        }
        return ans;
    }
};