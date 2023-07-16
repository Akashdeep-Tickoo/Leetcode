#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>ourmap;
        int ans=0;
        int i=0,j=0;
        while(j<s.length())
        {
            ourmap[s[j]]+=1;
            if(j-i+1>ourmap.size())
            {
                cout<<ourmap.size()<<endl;
                ourmap[s[i]]-=1;
                if(ourmap[s[i]]==0)
                {
                    ourmap.erase(s[i]);
                }
                i++;
            }
            if(ourmap.size()==j-i+1)
            {
                ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
};