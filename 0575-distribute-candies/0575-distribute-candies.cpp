#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size()/2;
        unordered_map<int,int>ourmap;
        for(int x:candyType)
        {
            ourmap[x]+=1;
        }
        int a=ourmap.size();
        return min(a,n);
    }
};