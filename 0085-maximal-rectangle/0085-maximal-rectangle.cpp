#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void findRelement(vector<int> v,vector<int> &right)
    {
        stack<pair<int,int>> s;
        for(int i=v.size()-1;i>=0;--i)
        {
            if(s.empty())
            {
                right.push_back(v.size());
                s.push({v[i],i});
            }
            else if(!s.empty()&&s.top().first<v[i])
            {
                right.push_back(s.top().second);
                s.push({v[i],i});
            }
            else
            {
                while(!s.empty()&&s.top().first>=v[i])
                {
                    s.pop();
                }
                if(s.empty())
                {
                    right.push_back(v.size());
                    s.push({v[i],i});
                }
                else
                {
                    right.push_back(s.top().second);
                    s.push({v[i],i});
                }
            }
        }
    }
    void findLelement(vector<int> v,vector<int> &left)
    {
        stack<pair<int,int>> s;
        for(int i=0;i<v.size();++i)
        {
            if(s.empty())
            {
                left.push_back(-1);
                s.push({v[i],i});
            }
            else if(!s.empty()&&s.top().first<v[i])
            {
                left.push_back(s.top().second);
                s.push({v[i],i});
            }
            else
            {
                while(!s.empty()&&s.top().first>=v[i])
                {
                    s.pop();
                }
                if(s.empty())
                {
                    left.push_back(-1);
                    s.push({v[i],i});
                }
                else
                {
                    left.push_back(s.top().second);
                    s.push({v[i],i});
                }
            }
        }
    }
    int find(vector<char> v,vector<int> &test)
    {
        for(int i=0;i<v.size();++i)
        {
            int p=v[i]-'0';
            if(p==0)
            {
                test[i]=0;
            }
            else
            {
                test[i]+=p;
            }
        }
        vector<int> left;
        findLelement(test,left);
        vector<int> right;
        findRelement(test,right);
        reverse(right.begin(),right.end());
        vector<int> cal(v.size(),0);
        for(int i=0;i<v.size();++i)
        {
            cal[i]=right[i]-left[i]-1;
            cal[i]*=test[i];
        }
        int t=*max_element (cal.begin(), cal.end());
       return t; 
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int ans=0;
        int s=matrix[0].size();
        vector<int> test(s,0);
        for(int i=0;i<matrix.size();++i)
        {
            int x=find(matrix[i],test);
            ans=max(ans,x);
        }
        return ans;
    }
};