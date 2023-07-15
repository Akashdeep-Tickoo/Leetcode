#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void bfs(vector<vector<int>>& isConnected,vector<int>& visited,int i){
        visited[i]=1;
        queue<int>q;
        q.push(i);
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(int j=0;j<isConnected[node].size();++j)
            {
                if(visited[j]==0&&isConnected[node][j]==1)
                {
                    visited[j]=1;
                    q.push(j);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans=0;
        int n=isConnected.size();
        vector<int> visited(n,0);
        for(int i=0;i<n;++i)
        {
            if(visited[i]==0)
            {
                bfs(isConnected,visited,i);
                ans+=1;
               
            }
        }
        return ans;
        
        
        
    }
};