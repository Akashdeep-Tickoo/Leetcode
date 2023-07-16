#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0;
        unordered_map<int,int>ourmap;
        int i=0,j=0;
        while(j<fruits.size())
        {
            ourmap[fruits[j]]+=1;
            while(ourmap.size()>2)
            {
                ourmap[fruits[i]]-=1;
                if(ourmap[fruits[i]]==0)
                {
                    ourmap.erase(fruits[i]);
                }
                i++;
            }
            if(ourmap.size()<=2)
            {
                ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
};