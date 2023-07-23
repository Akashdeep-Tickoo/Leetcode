#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        long ans=0;
        int min=INT_MIN,max=INT_MAX;
        if(s.length()==0)
        {
            return 0;
        }
        int i=0;
        while(i<s.length()&&s[i]==' ')
        {
            i++;
        }
        s=s.substr(i);
        int sign=+1;
        if(s[0]=='-')
        {
            sign=-1;
        }
        i=(s[0]=='-'||s[0]=='+')?1:0;
        while(i<s.length())
        {
            if(s[i]==' '||isdigit(s[i])==0)break;
            ans=(ans*10)+(s[i]-'0');
            if(sign==-1&&(ans*sign<min))
            {
                return min;
            }
            if(sign==1&&(ans*sign>max))
            {
                return max;
            }
            i++;
        }
        return sign*ans;
    }
};