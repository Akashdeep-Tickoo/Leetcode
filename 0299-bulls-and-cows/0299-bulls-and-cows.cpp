#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0;
        int cows=0;
        unordered_map<char,int>s;
        unordered_map<char,int>g;
        for(int i=0;i<secret.length();++i)
        {
            if(secret[i]==guess[i])
            {
                bulls+=1;
                secret[i]='x';
                guess[i]='x';
            }
            if(secret[i]!='x')
            {
                s[secret[i]]+=1;
            }
             if(guess[i]!='x')
            {
                g[guess[i]]+=1;
            }
            
        }
        for(auto it:s)
        {
            if(g.count(it.first)!=0)
            {
                cows+=min(it.second,g[it.first]);
            }
        }
        string a,b,ans;
        a = to_string(bulls);
        b = to_string(cows);
        ans=a+"A";
        ans+=b;
        ans+="B";
        return ans;
        
    }
};