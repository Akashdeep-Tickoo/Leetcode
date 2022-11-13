#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> s1;
        stack<pair<int,int>> s2;
        vector<int> ans1;
        vector<int> ans2;
        for(int i=0;i<heights.size();++i)
        {
            if(s1.empty())
            {
                ans1.push_back(-1);
                s1.push({heights[i],i});
            }
            else if(s1.top().first<heights[i])
            {
                ans1.push_back(s1.top().second);
                s1.push({heights[i],i});
            }
            else
            {
                while(!s1.empty()&&s1.top().first>=heights[i])
                {
                    s1.pop();
                }
                 if(s1.empty())
                {
                    ans1.push_back(-1);
                    s1.push({heights[i],i});
                }
                else
                {
                    ans1.push_back(s1.top().second);
                    s1.push({heights[i],i});
                }
                
            }
        }
        for(int i=heights.size()-1;i>=0;--i)
        {
             if(s2.empty())
            {
                ans2.push_back(-1);
                s2.push({heights[i],i});
            }
            else if(s2.top().first<heights[i])
            {
                ans2.push_back(s2.top().second);
                s2.push({heights[i],i});
            }
            else
            {
                while(!s2.empty()&&s2.top().first>=heights[i])
                {
                    s2.pop();
                }
                if(s2.empty())
                {
                     ans2.push_back(-1);
                     s2.push({heights[i],i});
                }
                else
                {
                    ans2.push_back(s2.top().second);
                    s2.push({heights[i],i});
                }
            }
        }
        reverse(ans2.begin(),ans2.end());
        vector<int>v;
        int ans=0;
        for(int i=0;i<heights.size();++i)
        {
            int x;
            if(ans2[i]==-1&&ans1[i]==-1)
            {
                x=heights.size();
            }
            else if(ans2[i]==-1)
            {
                int a=heights.size()-i;
                int b=i-ans1[i];
                x=a+b-1;
            }
            else
            {
                x=ans2[i]-ans1[i]-1;
            }
            v.push_back(x);
            int p=heights[i]*x;
            ans=max(ans,p);
        }
        for(int i=0;i<heights.size();++i)
        {
            cout<<v[i]<<" ";
        }
        return ans;
    }
};