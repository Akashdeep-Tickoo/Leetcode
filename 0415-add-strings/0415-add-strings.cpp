#include<bits/stdc++.h>
using namespace std;
int strtoint(char x)
{
    return x-'0';
}
char inttostr(int x)
{
    return x+'0';
}
class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        if(num1.length()<num2.length())
        {
            swap(num1,num2);
        }
        int size1=num1.length();
        int size2=num2.length();
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int carry=0;
        for(int i=0;i<size2;++i)
        {
            int sum=strtoint(num2[i])+strtoint(num1[i]);
            sum+=carry;
            ans+=inttostr(sum%10);
            carry=sum/10;
        }
        for(int i=size2;i<size1;++i)
        {
            int sum=strtoint(num1[i]);
            sum+=carry;
            ans+=inttostr(sum%10);
            carry=sum/10;
        }
        if(carry==1)
        {
            ans+=carry+'0';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};