#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        
        int score=0;
        while(!pq.empty())
        {
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            if(y==0)
            {
                return score;
            }
            pq.pop();
            score=score+1;
            pq.push(x-1);
            pq.push(y-1);
        }
        return score;
        
    }
};