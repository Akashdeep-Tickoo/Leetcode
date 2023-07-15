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
            if(ourmap[s[j]]>1)
            {
                while(ourmap[s[j]]>1)
                {
                    ourmap[s[i]]-=1;
                    ++i;
                    if(ourmap[s[i]]==0)
                    {
                        ourmap.erase(s[i]);
                    }
                }
            }
            else
            {
                cout<<j<<" "<<i<<endl;
                ans=max(ans,(j-i)+1);
            }
            ++j;
        }
        return ans;
    }
};