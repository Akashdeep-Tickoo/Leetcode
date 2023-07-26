#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<=j)
        {
            // cout<<s[i]<<" "<<s[j]<<" "<<i<<" "<<j<<endl;
            if(((s[i]>=48&&s[i]<=57)||(s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))&&((s[j]>=48&&s[j]<=57)||(s[j]>=65&&s[j]<=90)||(s[j]>=97&&s[j]<=122)))
            {
                char c1=tolower(s[i]);
                char c2=tolower(s[j]);
                if(c1!=c2)
                {
                    // cout<<c1<<" "<<c2;
                    return false;
                }
                ++i;
                --j;
            }
            else if(((s[j]>=48&&s[j]<=57)||(s[j]>=65&&s[j]<=90)||(s[j]>=97&&s[j]<=122)))
            {
                ++i;
            }
            else if(((s[i]>=48&&s[i]<=57)||(s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))){
                --j;
            }
            else
            {
                ++i;
                --j;
            }
        }
        return true;
        
    }
};