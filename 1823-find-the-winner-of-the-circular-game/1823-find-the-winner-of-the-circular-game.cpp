#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void winner(vector<int>&v,int index,int k,int& ans)
    {
        if(v.size()==1)
        {
            ans=v[0];
            return;
        }
        int x=v.size();
        index=(index+k)%x;
        v.erase(v.begin()+index);
        cout<<endl;
        winner(v,index,k,ans);
    }
    int findTheWinner(int n, int k) {
        vector<int>v;
        for(int i=0;i<n;++i)
        {
            v.push_back(i+1);
        }
        k=k-1;
        int ans=-1;
        winner(v,0,k,ans);
        return ans;
    }
};