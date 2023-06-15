#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>ourmap;
        for(char x:s)
        {
            ourmap[x]+=1;
        }
        int ans=-1;
        for(int i=0;i<s.length();++i)
        {
            if(ourmap[s[i]]==1)
            {
                ans=i;
                return ans;
            }
        }
        return ans;
    }
};