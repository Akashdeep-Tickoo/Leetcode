#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int lmaxi=height[0];
        int rmaxi=height[height.size()-1];
        vector<int> left;
        vector<int> right;
        for(int i=0;i<height.size();++i)
        {
            if(height[i]>lmaxi)
            {
                lmaxi=height[i];
            }
            left.push_back(lmaxi);
        }
        for(int i=height.size()-1;i>=0;--i)
        {
            if(height[i]>rmaxi)
            {
                rmaxi=height[i];
            }
            right.push_back(rmaxi);
        }
        reverse(right.begin(),right.end());
        int sum=0;
        for(int i=0;i<height.size();++i)
        {
            sum+=min(left[i],right[i])-height[i];
        }
        return sum;
    }
};