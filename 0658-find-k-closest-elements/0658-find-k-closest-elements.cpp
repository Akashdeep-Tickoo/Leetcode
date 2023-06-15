#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>> > pq;
        for(int i:arr)
        {
            pair<int,int>p;
            p.first=abs(i-x);
            p.second=i;
            pq.push(p);
        }
        for(int i=0;i<k;++i)
        {
            pair<int,int>out=pq.top();
            pq.pop();
            ans.push_back(out.second);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};