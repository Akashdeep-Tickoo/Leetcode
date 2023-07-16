#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        int ans=INT_MAX;
        int si=0;
        unordered_map<char,int>ourmap;
        int i=0,j=0;
        for(int k=0;k<t.length();++k)
        {
            ourmap[t[k]]+=1;
        }
        int count=ourmap.size();
        while(j<s.length())
        {
            if(ourmap.count(s[j])>0)
            {
                ourmap[s[j]]-=1;
                if(ourmap[s[j]]==0)
                {
                    count-=1;
                }
            }
            while(count==0)
        {
            ans=min(ans,j-i+1);
            if(ans==j-i+1)si=i;
            if(ourmap.count(s[i])>0)
            {
                ourmap[s[i]]+=1;
                if(ourmap[s[i]]==1)
                {
                    count+=1;
                }
            }
                ++i;
        }
            ++j;
        }
        string akash="";
        if(ans==INT_MAX) return akash;
        for(int i=0;i<ans;++i)
        {
            akash+=s[si+i];
        }
        return akash;
    }
};