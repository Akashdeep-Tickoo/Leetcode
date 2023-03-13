#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        for(auto it=0;it<n;++it)
        {
            string s="";
            if((it+1)%3!=0&&(it+1)%5!=0)
            {
                s+=to_string(it+1);
            }
            if((it+1)%3==0)
            {
                s+="Fizz";
            }
            if((it+1)%5==0)
            {
                s+="Buzz";
            }
            ans.push_back(s);
        }
        return ans;
        
    }
};