#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pdhelper(string s,int i,bool &ans,int p)
    {
        // if(i==p/2)
        // {
        //     return;
        // }
        // int x=p;
        // if(s[i]!=s[x-i-1])
        // {
        //     ans=false;
        //     return;
        // }
        // pdhelper(s,i+1,ans,p);
        
        for(int i=0;i<(p/2);++i)
        {
            if(s[i]!=s[p-i-1])
            {
                ans=false;
                return;
            }
        }
    }
    
    
    
    bool isPalindrome(string s) {
        string akash="";
        for(auto x:s)
        {
            if(iswalnum(x))
            {
                char t=x;
                if(isalpha(x))
                {
                    t=tolower(x);
                }
                akash+=t;
            }
        }
        if(akash.length()==0||akash.length()==1)
        {
            return true;
        }
        bool ans=true;
        int p=akash.length();
        pdhelper(akash,0,ans,p);
        return ans;
    }
};