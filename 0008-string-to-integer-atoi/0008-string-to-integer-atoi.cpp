#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(s[i]==' ')
        {
            ++i;
        }
        int sign=1;
        long long ans=0;
        if(isdigit(s[i]))
        {
            s=s.substr(i);
            i=0;
        }
        else
        {
            if(s[i]=='-')
            {
                sign=-1;
            }
            else if(s[i]=='+')
            {
                sign=1;
            }
            else
            {
                return ans;
            }
            i=i+1;
        }
        while(i<s.length())
        {
            if(isalpha(s[i]))
            {
                if(sign*ans<=INT_MIN)
                {
                    return INT_MIN;
                }
                else if(sign*ans>=INT_MAX)
                {
                    return INT_MAX;
                }
                return sign*ans;
            }
            else if(isdigit(s[i]))
            {
                 if(sign*ans<=INT_MIN)
                {
                    return INT_MIN;
                }
                else if(sign*ans>=INT_MAX)
                {
                    return INT_MAX;
                }
            ans=(ans*10)+(s[i]-'0');
            }
            else
            {
                 if(sign*ans<=INT_MIN)
                {
                    return INT_MIN;
                }
                else if(sign*ans>=INT_MAX)
                {
                    return INT_MAX;
                }
                return sign*ans; 
            }
            i=i+1;
        }
        
                if(sign*ans<=INT_MIN)
                {
                    return INT_MIN;
                }
                else if(sign*ans>=INT_MAX)
                {
                    return INT_MAX;
                }
                return sign*ans;
    }
};