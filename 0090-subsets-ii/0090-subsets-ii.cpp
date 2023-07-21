#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void helpersubset(vector<int>& A,vector<int> ds,int i,map<vector<int>,int>& ourmap)
    {
        if(i==A.size())
        {
            ourmap[ds]+=1;
            return;
        }
        ds.push_back(A[i]);
        helpersubset(A,ds,i+1,ourmap);
        ds.pop_back();
        helpersubset(A,ds,i+1,ourmap);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        map< vector<int> ,int> ourmap;
        vector<int> ds;
        helpersubset(nums,ds,0,ourmap);
        map<vector<int>,int>::iterator it=ourmap.begin();
        while(it!=ourmap.end())
        {
            ans.push_back(it->first);
            ++it;
        }
        return ans;
    }
};