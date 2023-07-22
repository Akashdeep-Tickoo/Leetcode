#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void helperletter(string s,vector<string>& ans,string ds)
    {
        if(s.length()==0)
        {
            ans.push_back(ds);
            return;
        }
        if(isdigit(s[0]))
        {
            helperletter(s.substr(1),ans,ds+=s[0]);
            return;
        }
        ds+=s[0];
        helperletter(s.substr(1),ans,ds);
        ds.pop_back();
        if(isupper(s[0]))
        {
            ds+=tolower(s[0]);
        }
        else
        {
            ds+=toupper(s[0]);
        }
        helperletter(s.substr(1),ans,ds);
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string ds="";
        helperletter(s,ans,ds);
        return ans;
    }
};