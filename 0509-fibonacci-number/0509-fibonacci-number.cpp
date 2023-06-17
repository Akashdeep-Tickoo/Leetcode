#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
        int prev,prev2,ans;
        if(n<=1)
        {
            return n;
        }
        prev2=0;
        prev=1;
        for(int i=2;i<=n;++i)
        {
            ans=prev+prev2;
            prev2=prev;
            prev=ans;
        }
        return ans;
    }
};